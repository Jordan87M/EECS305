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


%performance requirements
M = maxovershoot/100;
eps = errband/100;
zeta = sqrt((log(M)^2)/((pi^2)+(log(M))^2));
wn = (1/(zeta*tsettling))*log(1/(eps*sqrt(1-zeta^2)));

%lead controller design
clrootloc = -wn*zeta + j*abs(wn*sqrt(1-zeta^2))
%use the positive imaginary axis

poleangle = 0;
zeroangle = 0;
offset = 8;
while poleangle >= zeroangle
    leadzero = real(clrootloc) - offset;
    ol1pole = 0;
    ol2pole = -6.6868;
    ol3pole = -9.9799;

    ol1angle = atan2(imag(clrootloc),real(clrootloc))
    ol2angle = atan2(imag(clrootloc),(real(clrootloc) - ol2pole))
    ol3angle = atan2(imag(clrootloc),(real(clrootloc) - ol3pole))
    zeroangle = atan2(imag(clrootloc),(real(clrootloc) - leadzero))
    poleangle = -pi - zeroangle + ol1angle + ol2angle + ol3angle;
    
    while poleangle > 2*pi
        poleangle = poleangle - 2*pi
    end

    while poleangle < 0
        poleangle = poleangle + 2*pi
    end
    
    poleangle
    
    offset = offset + 1;
    if offset > 40
        break
    end
end



if poleangle <= 2*pi && poleangle >= pi
    'need to choose a new zero location'
end

leadpole = -imag(clrootloc)/tan(poleangle) + real(clrootloc);

G =  abs(clrootloc)*abs(clrootloc - ol2pole)*abs(clrootloc - leadpole)/abs(clrootloc - leadzero);

inputscaling = abs(G*leadzero/leadpole);




figure(1)
hold on
plot(real(clrootloc),imag(clrootloc),'xr');
plot(real(clrootloc),-imag(clrootloc),'xr');
plot(real(leadpole),imag(leadpole),'xb');
plot(real(leadzero),imag(leadzero),'ob');
plot(0,0,'xb');
plot(ol2pole,0,'xb');
plot(ol3pole,0,'xb');
sgrid(zeta,wn);

display('Okay, here are the controller parameters:')
display(['lead controller zero location: ' num2str(leadzero)])
display(['lead controller pole location: ' num2str(leadpole)])
display(['lead controller gain: ' num2str(G)])

display(['if the controller is in the feedback path, scale the reference by: ' num2str(inputscaling)])


