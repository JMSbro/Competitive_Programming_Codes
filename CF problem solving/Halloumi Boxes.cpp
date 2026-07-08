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
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >>k;
        vector<int> v(n);
        bool same = true;
        for (int i = 0; i < n; i++){
            cin >> v[i];
            if(i > 0){
                if(v[i-1] > v[i]) same = false;
            }
        }
        if(k == 1 && !same) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}
