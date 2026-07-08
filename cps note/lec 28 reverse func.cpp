#include<bits/stdc++.h>
using namespace std;
const int mx = 1e5+123;
int a[mx];

void swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}

void reverse(int b, int a[])
{
    for(int i = 0, j = b - 1; i < j; i++, j--){
        swap(a[i],a[j]);
    }
}
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n;i++){
        cin >> a[i];
    }
    reverse(n,a);
    for(int i = 0; i < n ; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    int x = 9,y = 3;
    swap(x,y); // chatgpt, why is swap not working?
    cout << x << endl << y;
    return 0;
}

