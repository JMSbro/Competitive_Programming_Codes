#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction cout << fixed << setprecision
#define mem(a,b) memset(a,b,sizeof(a))
const unsigned long long sz = 1e12+10;
vector<int> ara(sz);

void sieve()
{
    unsigned long long i, j, root;
    for(i = 2; i < sz; i++) {
        ara[i] = 1;
    }
    root = sqrt(sz);

    for(i = 2; i <= root; i++) {
        if(ara[i] == 1) {
            for(j = 2; i * j <= sz; j++) {
                if(i*j <= sz) ara[i * j] = 0;
            }

        }
    }
}

int main()
{
    optimize();
    sieve();
    int t;
    while(t--){
        ll n;
        cin >> n;
        if(ara[n] == 1) cout << n << " is a prime" << endl;
        else cout << n << " is not a prime" << endl;
    }
    return 0;
}
