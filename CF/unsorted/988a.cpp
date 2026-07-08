#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction()cout << fixed << setprecision()
#define mem(a,b) memset(a,b,sizeof(a))
const int mx = 25;
int a[mx];
int main()
{
    optimize();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        for(int i = 1; i <= n; i++ ){
            cin >> a[i];
        }
        int cnt = 0;
        for(int i = 1;i <= n; i++){
            if(a[i] != 0){
                for(int j = i+1; j <= n; j++){
                    if(a[j] != 0) {
                        if(a[i] == a[j]){
                            cnt++;
                            a[i] = 0;
                            a[j] = 0;
                        }
                    }
                }
            }
        }
        cout << cnt << endl;
        mem(a,0);
    }
  for(int i = 1; i < cnt; i++){
           for(int j= i+1; j < cnt; j++){
            if(my[i] * my[j] == ck) {
                cout << my[i] << " " << my[j] << endl;
                b = true;
                break;
            }
           }
           if(b) break;
        }

    return 0;
}
