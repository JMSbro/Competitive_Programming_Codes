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
        ll n, a, b ,c;
        cin >> n >> a >> b >> c;
        ll sum = 0, cnt = 0,i = 1;
        while(1){
            if(sum >= n) {
                break;
            }
            else {
                if(i == 1){
                    cnt++;
                    i++;
                    sum += a;
                }
                else if(i == 2){
                    cnt++;
                    i++;
                    sum += b;
                }
                else {
                    cnt++;
                    i = 1;
                    sum += c;
                }

            }

        } cout << cnt << endl;
    }
    return 0;
}
