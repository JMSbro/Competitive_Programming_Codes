#include<iostream>
using namespace std;

int pow(int base, int exponent)
{
    if( exponent == 0 ) return 1;
    else {
        return base * pow( base, exponent - 1);
    }
}

int main()
{
    int b , e;
    cin >> b >> e;

    int result = pow(b,e);

    cout << result << endl;

    return 0;
}
