ks = .0993;
tau = .265;
s = tf('s');
K = [1,2,4,8,16,32,64];

systf = ks/(s*(tau*s + 1))
figure(1);
%rlocus(systf,[0:.1:64])
hold on

for i = 1:length(K)
    display(['poles for ' num2str(K(i)) ' : '])
    fbsystf = feedback(K(i)*systf,1)
    %fbsystf = feedback(systf,K(i));
    
    poles = pole(fbsystf)
    plot(real(poles),imag(poles),'*','MarkerSize',12)
    wn = min(abs(poles))
    zeta = min(abs(real(poles)))/wn
    rlocfind(systf,poles)
end