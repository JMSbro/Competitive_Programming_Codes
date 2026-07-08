#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction()cout << fixed << setprecision()
#define mem(a,b) memset(a,b,sizeof(a))
int d[110], c[110];
int main()
{
    optimize();
    int t;
    cin >> t;
    while(t--){
        int n,m,sad = 0;
        cin >> n >>m;
        for(int i = 1; i <= n; i++){
            cin >> d[i];
        }
        for(int i = 1; i <= m; i++){
            cin >> c[i];
        }

        for(int i = 1; i<=m; i++){
            if(d[c[i]] <= 0) sad++;
            else d[c[i]]--;
        }
        cout << sad << endl;
    }
    return 0;
}
