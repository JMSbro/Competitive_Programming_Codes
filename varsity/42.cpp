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
        for(int i = n; i >= 0; i--){
            if(i == 0) cout << 1 << endl;
            else if(i == 1) cout << 2 << " + ";
            else cout << "2^" << i << " + ";
        }
    }
    return 0;
}
