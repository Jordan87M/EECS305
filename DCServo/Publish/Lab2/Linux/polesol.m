ks = .0993;
tau = .265;
s = tf('s');
K = [1,2,4,8,16,32,64];

systf = ks/(s*(tau*s + 1));

for i = 1:length(K)
    fbsystf = feedback(K(i)*systf,1);
    %fbsystf = feedback(systf,K(i));
    display(['poles for ' num2str(K(i)) ' : '])
    pole(fbsystf)
end