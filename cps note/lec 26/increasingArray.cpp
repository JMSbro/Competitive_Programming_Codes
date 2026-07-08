#include<iostream>
using namespace std;

const int mx = 2e5+123;
long long a[mx];

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    long long mv = 0;
    for(int i = 0;i < n - 1; i++){
        if(a[i+1] < a[i]){
            mv += a[i] - a[i+1];
            a[i+1] = a[i];
        }
    }
    cout << mv << endl;

    return 0;
}
