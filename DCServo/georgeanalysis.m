clc;
Ks      = 0.1;                  %Ks from 3.1
tau     = 0.2655;               %Tau from 3.1
K1      = [1 2 4 8 16 32 64];   %our K1 values

%system parameters
wn      = sqrt(Ks*K1./tau)
zeta    = 0.5*sqrt(1./(K1*Ks*tau))

wd = wn.*sqrt(1-zeta.^2);
beta = atan(sqrt(1-zeta.^2)./zeta);
tr = (pi-beta)./wd;
tp = pi./wd