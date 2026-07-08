#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define fraction() cout<<fixed<<setprecision(5);
typedef long long ll;
typedef double dl;


int main()
{
    optimize();
    int t;
    cin >> t;
    while(t--){
        ll a, b, c;
        cin >> a >> b >> c;
        if((a == b && b == c && c == a)) cout << "YES" << endl;
        else {
            if(a > (b+c) || b > (c+a) || c > (a+b)) cout << "NO" << endl;
            else cout << "YES" << endl;

        }
    }
    return 0;
}

