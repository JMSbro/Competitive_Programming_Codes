#include<iostream>
using namespace std;
const int mx = 1e6+123;
char s[mx];
int main()
{
    scanf("%s", s);
    int sum = 0;
    int i = 0;

    while( s[i] != 0){
        sum += s[i] - '0';
        i++;
    }

    cout << sum;
    return 0;

}
