%make sure all parameters are defined


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


ks = 1.62;
tau = .254;

s = tf('s');
systf = ks/(s*(tau*s + 1));
systf2 = ks/(tau*s + 1);

%performance requirements
M = maxovershoot/100;
eps = errband/100;
zeta = sqrt((log(M)^2)/((pi^2)+(log(M))^2));
wn = (1/(zeta*tsettling))*log(1/(eps*sqrt(1-zeta^2)));

%lead controller design
clrootloc = -wn*zeta + j*abs(wn*sqrt(1-zeta^2));
%use the positive imaginary axis


offset = 5;
ol1pole = 0;
ol2pole = -(1/tau);
ol1angle = atan2(imag(clrootloc),real(clrootloc));
ol2angle = atan2(imag(clrootloc),(real(clrootloc) - ol2pole));

anglediff = pi + ol1angle + ol2angle;

while anglediff > 2*pi
    anglediff = anglediff - 2*pi;
end

while anglediff < 0
    anglediff = anglediff + 2*pi;
end

minzeroloc = -imag(clrootloc)/tan(anglediff) + real(clrootloc);
maxzeroloc = real(clrootloc);

d= .25;
leadzero =  d*(minzeroloc) + (1-d)*maxzeroloc;

zeroangle = atan2(imag(clrootloc),(real(clrootloc) - leadzero));
poleangle = -pi + zeroangle - ol1angle - ol2angle;

while poleangle > 2*pi
    poleangle = poleangle - 2*pi;
end

while poleangle < 0
    poleangle = poleangle + 2*pi;
end

poleangle




if poleangle <= 2*pi && poleangle >= pi
    'need to choose a new zero location'
end

leadpole = -imag(clrootloc)/tan(poleangle) + real(clrootloc);

G =  abs(clrootloc)*abs(clrootloc - ol2pole)*abs(clrootloc - leadpole)/((ks/tau)*abs(clrootloc - leadzero));

inputscaling = abs(G*leadzero/leadpole);


%state feedback controller design
lambda1 = [-2, -4, -2 + 2*j, -2 + 4*sqrt(6)*j ];
lambda2 = [-4, -5, -2 - 2*j, -2 - 4*sqrt(6)*j ];

k1 = zeros(size(lambda1));
k2 = zeros(size(lambda2));

for i = 1:length(lambda1)
    k1(i) = lambda1(i)*lambda2(i)*tau/(ks);
    k2(i) = ((lambda1(i) + lambda2(i))*tau + 1)/ks;
end

figure(1)
hold on
msize = 15.0;
lwidth = 2.5;
plot(real(clrootloc),imag(clrootloc),'xr','MarkerSize',msize,'LineWidth',lwidth);
plot(real(clrootloc),-imag(clrootloc),'xr','MarkerSize',msize,'LineWidth',lwidth);
plot(real(leadpole),imag(leadpole),'xb','MarkerSize',msize,'LineWidth',lwidth);
plot(real(leadzero),imag(leadzero),'ob','MarkerSize',msize,'LineWidth',lwidth);
plot(0,0,'xb','MarkerSize',msize,'LineWidth',lwidth);
plot(-1/tau,0,'xb','MarkerSize',msize,'LineWidth',lwidth);
leadtf = (s -leadzero)/(s - leadpole);
rlocus(systf*leadtf)
sgrid(zeta,wn);


display('Okay, here are the controller parameters:')
display(['lead controller zero location: ' num2str(leadzero)])
display(['lead controller pole location: ' num2str(leadpole)])
display(['lead controller gain: ' num2str(G)])

display(['if the controller is in the feedback path, scale the reference by: ' num2str(inputscaling)])


