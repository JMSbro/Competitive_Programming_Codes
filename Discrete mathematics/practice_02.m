clc;
clear variables;

a = input('Enter first number: ');
b = input('Enter second number: ');

add = a + b;
sub = a - b;
mul = a * b;
div = a / b;

c = a - b; 
fprintf('%d + %d = %d\n', a, b, add);
fprintf('%d - %d = %d\n', a, b, sub);
fprintf('%d * %d = %d\n', a, b, mul);
fprintf('%d / %d = %d\n', a, b, div);
%disp(c);
