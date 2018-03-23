set_param('Lab4_Lead/input gain', 'Gain', num2str(inputscaling));
set_param('Lab4_Lead/feedback gain', 'Gain', num2str(G));
set_param('Lab4_Lead/Lead Controller', 'Numerator', ['[1 ' num2str(-1*leadzero) ']']);
set_param('Lab4_Lead/Lead Controller', 'Denominator', ['[1 ' num2str(-1*leadpole) ']']);