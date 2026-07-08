#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction cout << fixed << setprecision
#define mem(a,b) memset(a,b,sizeof(a))
#define pb push_back()

int main()
{
    optimize();
    int a,c;
    ll b,d;
    cin >> a >> b >> c >> d;
    dl x = b * log(a);
    dl y = d * log(c);
    if(x > y) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
