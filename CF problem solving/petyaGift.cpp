#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define fraction() cout<<fixed<<setprecision(5);
void coutarr(int a[], int len)
{
    for(int i = 1; i <= len; i++) {
            cout << a[i] << " ";
    }
    cout << endl;
}
typedef long long ll;
typedef double dl;

int n;
int main()
{
    optimize();

    cin >> n;
    int a[n];
    for(int i = 1; i <= n; i++){
        int b;
        cin >> b;
        a[b] = i;
    }
    cioutarr(a,n);

    return 0;
}

