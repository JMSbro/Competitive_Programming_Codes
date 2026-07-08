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
        string s, t;
        cin >> s ;
        cin >> t;
        int i,j,cnt = 0;

        for( i = 0; i <= (s.size() - t.size()); i++){
            if(s[i] == t[0]){
                for( j = 1; j < t.size();j++){
                    if(t[j] != s[i+j]) break;
                }
                if(j == t.size()) {
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
