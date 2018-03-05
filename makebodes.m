%fbvec = [.1, .2, .5, 1, 2, 5, 10, 20, 50, 100, 200, 500, 1000];
fbvec = [.1, 1, 10, 100, 1000];

%w = logspace(-4, 3, 10000);

figure();
hold on;

for i = 1:length(fbvec)
   bode(feedback(fbvec(i)*systf,1));
end

figure();
hold on;

for i = 1:length(fbvec)
   bode(feedback(fbvec(i)*systf2,1));
end