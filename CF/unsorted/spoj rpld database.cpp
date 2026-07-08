#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n)
#define mem(a,b) memset(a,b,sizeof(a))
#define pb push_back()

int main()
{
    optimize();
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++){
        int n, d;
        cin >> n >> d;
        bool ck = true;
        map<pair<int,int>, int> m;
        for(int i = 0;i < d; i++){
            int a,b;
            cin >> a >> b;
            m[{a,b}]++;
            if(m[{a,b}] > 1 ) ck = false;
        }
        if(ck) cout << "Scenario #" << i << ": possible" << endl;
        else cout << "Scenario #" << i << ": impossible" << endl;
    }
    return 0;
}

