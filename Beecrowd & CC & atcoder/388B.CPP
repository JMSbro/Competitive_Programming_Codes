#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction cout << fixed << setprecision
#define mem(a,b) memset(a,b,sizeof(a))

int main()
{
    optimize();
    int n, d, mx = 0, w = 0;
    cin >> n >> d;
    vector<pair<int, int>> p(n);
    for(int i = 0;i < n; i++){
        int t, l;
        cin >> t >> l;
        p[i].first = t;
        p[i].second = l;
    }
    for(int i = 1; i <= d; i++){
        for(int j = 0; j < n; j++){

            w = p[j].first * (p[j].second + i);
            if(w >= mx) mx = w;
        }
        cout << mx << endl;
        w = 0;
        mx = 0;
    }
    return 0;
}
