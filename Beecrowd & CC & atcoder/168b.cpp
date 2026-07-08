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
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        } int m = 0;
        for(int i = 0;i < n; i++){
            if(a[i] > m) {
                cout << 1 << " ";
                m = a[i];
            }
            else{
               cout << 0 << " ";

            }
        } cout << endl;
    }
    return 0;
}
