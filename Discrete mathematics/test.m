clc;
clear variable;
a = input('Enter Number 1 : ');
b = input('Enter Number 2 : ');

add = a + b;
sub = a - b;
mul = a * b;
div = a / b;

fprintf("%d + %d = %d\n", a , b, add);
fprintf("%d - %d = %d\n", a, b, sub);
fprintf("%d * %d = %d\n", a, b, mul);
fprintf("%d / %d = %d\n", a, b, div);

x = 5;
y = 2*x;
x = x + 1;
disp(y);