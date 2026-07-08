
//In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    int t;
    cin >> t;
    while(t--){
        string s, x;
        bool ck = false ;
        int n,m , cnt = 0;
        cin >> n >> m >> x >> s;
        if(m <= n) {
            for(int i = 0; i < 2; i++){
                if(x.find(s) != -1){
                    ck = true;
                    break;
                }
                else {
                    cnt++;
                    x += x;
                }
            }
        }
        else {
            for(int i = 0; i <= 5; i++){
                if(x.find(s) != -1){
                    ck = true;
                    break;
                }
                else {
                    cnt++;
                    x += x;
                }
            }
        }
        if(!ck) cout << -1 << endl;

        else cout << cnt << endl;
    }
    return 0;
}
