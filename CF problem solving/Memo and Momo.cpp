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
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    if((a + b + c) == d) cout << "YES1" << endl;
    else if((a + b - c) == d) cout << "YES2" << endl;
    else if((a + b * c) == d) cout << "YES3" << endl;
    else if((a - b - c) == d) cout << "YES4" << endl;
    else if((a - b + c) == d) cout << "YES5" << endl;
    else if((a - b * c) == d) cout << "YES6" << endl;
    else if((a * b * c) == d) cout << "YES7" << endl;
    else if((a * b + c) == d) cout << "YES8" << endl;
    else if((a * b - c) == d) cout << "YES9" << endl;
    else cout << "NO" << endl;
    return 0;
}
