#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define fraction(a) fixed<<setprecision(a)<<
#define mem(a,b) memset(a,b,sizeof(a))
typedef long long ll;
typedef double dl;

int a[110];
int main()
{
    optimize();
    int n, q;
    char h;
    cin >> n >> q;
    int r = 2, l = 1, cnt = 0;
    int a;
    for(int i = 1; i <= q; i++){

        cin >> h >> a;
        if(i == 1) {

            if(h == 'R') {
                cnt += a - r;
                r = a;
            }
            else {
                cnt += a - l;
                l = a;
            }

        }
        else{
            if(h == 'R') {
                if(a != r){
                    if(a > l) cnt += n - l ;
                    else cnt += l - a -1;
                }
                r = a;
            }
            else {
                if(a != l){
                    if(a > r) cnt += n - r ;
                    else cnt += r - a - 1;
                }
                l = a;
            }
        }
        cout << cnt << endl;
    }
    cout << cnt << endl;
    return 0;
}

