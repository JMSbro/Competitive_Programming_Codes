#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction()cout << fixed << setprecision()
#define mem(a,b) memset(a,b,sizeof(a))
const int mx = 2e5 + 100;
int a[mx], my[mx];
int main()
{
    optimize();
    int t;
    cin >> t;
    while(t--){
        int k;
        cin >> k;
        int ck = k - 2, d, c;
        bool b = false;
        int cnt = 0;
        for(int i=1; i <= k; i++){
            cin >> a[i];
            if(!b) {
                if(ck % a[i] == 0) {
                my[cnt] = a[i];
                    for(int j = cnt - 1; j >= 0; j--){
                    if(my[j] * my[cnt] == ck) {
                         d = my[j];
                         c = my[cnt];
                        b = true;
                        break;
                        }
                    }
                cnt++;
            }
            }
        }
        cout << d << " " << c << endl;
        mem(my,0);
        mem(a,0);
    }
    return 0;
}
