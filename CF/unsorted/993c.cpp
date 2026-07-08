#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction()cout << fixed << setprecision()
#define mem(a,b) memset(a,b,sizeof(a))

int main()
{
    optimize();
    int t;
    cin >> t;
    while(t--){
        int m, a, b, c, r1 = 0, r2 = 0, r;
        cin >> m >> a >> b >>c;
        if(a >= m) r1 = m;
        else if(a < m && a != 0) {
            if(c == 0) {
                r1 = a;
            }
            else if(c > m - a){
                r1 = m;
                c = c - (m - a);
            }
            else {
                r1 = a + c;
                c = 0;
            }
        }
        else if(a < m && a == 0){
            if(c > m ) {
                r1 = m;
                c = c - m;
            }
            else if(c == m) {
                r1 = m;
                c = 0;
            }
            else if(c < m){
                r1 = c;
                c = 0;
            }
        }
        if(b >= m) r2 = m;
        else if(b < m && b != 0) {
            if(c == 0) {
                r2 = b;
            }
            else if(c > m - b){
                r2 = m;
                c = c - (m - b);
            }
            else {
                r2 = b + c;
                c = 0;
            }
        }
        else if(b < m && b == 0){
            if(c > m ) {
                r2 = m;
                c = c - m;
            }
            else if(c == m) {
                r2 = m;
                c = 0;
            }
            else if(c < m){
                r2 = c;
                c = 0;
            }
        }
        r = r1 + r2;
        cout << r << endl;
    }
    return 0;
}
