#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define fraction(a) fixed<<setprecision(a)<<
#define mem(a,b) memset(a,b,sizeof(a))
typedef long long ll;
typedef double dl;


int main()
{
    optimize();
    int t;
    cin >> t;
    while(t--){
        int n, k;
        bool ck = false;
        cin >> n >> k;
        for(int i = 10; i <13; i++){
            if(n*i == k) {
                cout << "yes" << endl;
               ck = true;
                break;
            }
        }
        if(ck) continue;
       for(int i = 1; i < n;i++){
        if((i*10+(n-i)*11) == k) {
              cout << "yes" << endl;
               ck = true;
                break;
        }
        if((i*10+(n-i)*12) == k) {
              cout << "yes" << endl;
               ck = true;
                break;
        }
        if((i*11+(n-i)*12) == k) {
              cout << "yes" << endl;
               ck = true;
                break;
        }
       }
       if(ck) continue;
        for(int i = 1; i < n-2; i++){
            for(int j = 1; i+j < n; j++){
                if(i*10+(j*11)+((n-i-j)*12) == k ){
                    cout << "yes" << endl;
                    ck = true;
                    break;
                }
                if(i*10+(j*12)+((n-i-j)*11) == k ){
                    cout << "yes" << endl;
                    ck = true;
                    break;
                }
                if(i*11+(j*10)+((n-i-j)*12) == k ){
                    cout << "yes" << endl;
                    ck = true;
                    break;
                }
                if(i*11+(j*12)+((n-i-j)*10) == k ){
                    cout << "yes" << endl;
                    ck = true;
                    break;
                }
                if(i*12+(j*10)+((n-i-j)*11) == k ){
                    cout << "yes" << endl;
                    ck = true;
                    break;
                }
                if(i*12+(j*11)+((n-i-j)*10) == k ){
                    cout << "yes" << endl;
                    ck = true;
                    break;
                }
                if(ck) break;
            }
            if(ck) break;
        }
        if(!ck) cout << "no" << endl;
    }
    return 0;
}
