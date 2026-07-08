clc;
clear variables;

m = [1 2 3; 4,5,6; 7,8,9]; %comma(,) or space both can be used to seperate values.
n = [1; 2; 3 ;4 ];
r = [1 2 3 4];
%disp(r)
%disp(n)
%disp(m)
%eye(3) %to print out a 3x3 identity matrix

%a = [1 2 3; 4 5 6; 7 8 9];
%matlab e index 1 theke hoy, C code e 0 theke
%%a(2,3) = 112 %kono value evabe row coloum die change kora jay
%disp(a(2,2)) %2 row 2 coloum er value show korbe.

%%disp(2:5)
%disp(1:2:10)
%disp(10:-2:3)
a = input("Give array values",; % dile ekta array pawa jabe ja mainly ekta 1D matrix hisebe
% save hoy. then disp(a(3)) dile 3rd colum er value ta asbe.
maxValue = a(1);
for ii = 1: length(a) %length = max(r,c) kore row and coloum er modde jeta boro value seta retun kore
    if a(1,ii) > maxValue
        maxValue = a(1,ii);
    end
end

disp(maxValue);
%b = a(1:2:3 , 1:2:3);
%disp(b)

%while and for ase, do while nai. HomeWork loop dekhe asa.

% HW : user theke 10 ta value array te input nie max ber kora., sum, mean or average, standard deviation value,
% 