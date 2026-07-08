#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction()cout << fixed << setprecision()
#define mem(a,b) memset(a,b,sizeof(a))
const int mx = 2e5+10;
int a[mx],mp[mx];

int main()
{
    optimize();
    int t;
    cin >> t;
    while(t--){
        int n, m = 0;
        bool ckl = true, ckm = true;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin>> a[i];
            mp[a[i]]++;
            if(a[i] > m) m = a[i];
        }
        if(a[0] == a[n-1]) ckl = false;
        for(int i = 0; i< n-1; i++){
            if(a[i] == a[i+1]) ckm = false;
        }
        if(n % 2 == 0){
            if(ckl && ckm) cout << "yes" << endl;

            else cout << "no" << endl;
        }
        else {
            if(ckl && ckm) cout << "yes" << endl;
            else if(!ckm && ckl) cout << "no" << endl;
            else if(ckm && !ckl) cout << "no" << endl;
            else cout << "yes" << endl;
        }

    }
    return 0;
}
