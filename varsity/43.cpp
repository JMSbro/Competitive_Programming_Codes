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
        int p, q, c;
        cin >> p >> q >> c;
        int result = 1;
        for(int i = 0; i < q; i++){
            result = (result * p) % c;
        }
        cout << "Result = " << result << endl;
    }

    return 0;
}
