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
    int t;
    cin >> t;
    while(t--){
        int na,nb;
        vector<int> a;
        cin >> na;
        for(int i = 0; i < na; i++){
            int v;
            cin >> v;
            a.push_back(v);
        }
        cin >> nb;
        for(int i = 0; i < nb; i++){
            int v;
            cin >> v;
            a.push_back(v);
        }
        sort(a.begin(), a.end());
        for(int i = 0;i < a.size(); i++){
            if(i == a.size() - 1) cout << a[i]  << endl;
            else cout << a[i] << " ";
        }
    }
    return 0;
}
