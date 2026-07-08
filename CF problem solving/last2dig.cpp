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
    ll a,b ,c ,d;
    cin>> a >> b >> c >> d;
    ll ra = a % 100;
    ll rb = b % 100;
    ll rc = c % 100;
    ll rd = d % 100;
    ll r = (ra * rb * rc * rd);
    int rx = r % 10;
    r /= 10;
    int ry = r % 10;
    cout << ry << rx << endl;

    return 0;
}
