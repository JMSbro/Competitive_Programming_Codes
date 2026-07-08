#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction()cout << fixed << setprecision()
#define mem(a,b) memset(a,b,sizeof(a))
const int mx = 60;
int a[mx], tr[mx];
int main()
{
    optimize();
    int t;
    cin >> t;
    while(t--){
        int n, mx = 0, bn= 0, cnt = 0;
        cin >> n;

        for(int i = 0;i < n; i++){

            cin >> a[i];
            tr[a[i]]++;
            if(tr[a[i]] > mx) {
                mx = tr[a[i]];
                bn = a[i];
            }
        }
        
        for(int i = 0;i < n;i++){

            if(a[i] != bn) {
                cnt++;
            }

        }
        cout << cnt << endl;
        mem(a,0);
        mem(tr,0);
    }
    return 0;
}
