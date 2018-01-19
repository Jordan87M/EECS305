%make sure all parameters are defined
if exist('steptime')
    steptime
else
    steptime = input('At what time is the step input applied?');
end

if exist('stepval')
    stepval
else
    stepval = input('What is the value of the step input?');
end

if exist('maxovershoot')
    maxovershoot
else
    maxovershoot = input('What is the maximum overshoot (%)');
end

if exist('errband')
    errband
else
    errband = input('What is the settling error band (as %)?');
end

if exist('tsettling')
    tsettling
else
    tsettling = input(['What is the ' num2str(errband) '% band settling time?']);
end

%system identification
omega = data.signals(2).values;
theta = data.signals(1).values;
time = data.time;
tlen = length(time);
fv = omega(tlen);
tval = .632*fv;

ks = fv/stepval;

thetex = theta((tlen-50):tlen) - theta(tlen-50);
tex = time((tlen-50):tlen) - time(tlen-50);
dthdt = pinv(tex)*thetex;
cs = dthdt/fv;

i = 1;
while omega(i) < tval
    i = i + 1;
end

if abs(omega(i)-tval) < abs(omega(i-1)-tval)
    tau = data.time(i) - steptime;
else
    tau = data.time(i-1) - steptime;
end

s = tf('s');
systf = ks/(s*(tau*s + 1));

%performance requirements
M = maxovershoot/100;
eps = errband/100;
zeta = sqrt((log(M)^2)/((pi^2)+(log(M))^2));
wn = (1/(zeta*tsettling))*log(1/(eps*sqrt(1-zeta^2)));

%lead controller design
clrootloc = -wn*zeta + j*(wn*sqrt(1-zeta^2));

leadzero = real(clrootloc) - 5 ;
ol1pole = 0;
ol2pole = -(1/tau);

ol1angle = atan2(imag(clrootloc),real(clrootloc));
ol2angle = atan2(imag(clrootloc),(real(clrootloc) - ol2pole));
zeroangle = atan2(imag(clrootloc),(real(clrootloc) - leadzero));

poleangle = pi - zeroangle + ol1angle + ol2angle;

while poleangle > 2*pi
    poleangle = poleangle - 2*pi
end

while poleangle < 0
    poleangle = poleangle + 2*pi
end

if poleangle <= 2*pi && poleangle >= pi
    'need to choose a new zero location'
end

leadpole = -imag(clrootloc)/tan(poleangle) + real(clrootloc);

G =  abs(clrootloc)*abs(clrootloc - ol2pole)*abs(clrootloc - leadpole)/abs(clrootloc - leadzero);

inputscaling = abs(G*leadzero/leadpole);


%state feedback controller design
lambda1 = [-2, -4, -2 + 2*j, -2 + 4*sqrt(6)*j ];
lambda2 = [-4, -5, -2 - 2*j, -2 - 4*sqrt(6)*j ];

k1 = zeros(size(lambda1));
k2 = zeros(size(lambda2));

for i = 1:length(lambda1)
    k1(i) = lambda1(i)*lambda2(i)*tau/(ks*cs);
    k2(i) = ((lambda1(i) + lambda2(i))*tau + 1)/ks;
end

