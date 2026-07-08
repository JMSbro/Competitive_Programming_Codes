#include<iostream>
using namespace std;
int main()
{
    int n, ck = 1;
    cout << "Enter a number: ";
    cin >> n;
    if(n == 0 || n == 1) ck = 0;
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0) ck = 0;
    }
    if(ck) cout << "Prime Number" << endl;
    else cout << "Not Prime Number." << endl;
}
