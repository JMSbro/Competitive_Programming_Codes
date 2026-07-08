#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction()cout << fixed << setprecision()
#define mem(a,b) memset(a,b,sizeof(a))
int main()
{
optimize();
    int n;
    cin >> n;
    cout << n/365 << " years" << endl;
    n -= (n/365) * 365;
    cout << n/30 << " months" << endl;
    n -= (n/30) * 30;
    cout << n << " days" << endl;
return 0;
}