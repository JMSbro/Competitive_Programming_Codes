clc;
clear variables;
ch = input('Enter a character: ', 's');

if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' )
    fprintf('It is a vowel.\n');
elseif(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    fprintf('It is a vowel.\n');
else
    fprintf('It is not a vowel.\n');
end