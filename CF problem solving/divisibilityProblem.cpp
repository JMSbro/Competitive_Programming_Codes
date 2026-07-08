#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define fraction(a) fixed<<setprecision(a)<<
#define mem(a,b) memset(a,b,sizeof(a))
typedef long long ll;
typedef double dl;


int main()
{
    optimize();
    int t;
    cin >> t;
    while(t--){
        ll a, b, cnt = 0;
        cin >> a >> b;
        bool ck = true;
        for(int i = 1; ck; i++){
            if(b * i >= a){
                cout << (b * i) - a << endl;
                ck = false;
            }
        }
    }
    return 0;
}

