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
        int x, k;
        cin >> x >> k;
        int sum = 0;
        for(int i = 0; i <= k; i++){
            sum += pow(x,i);
        }
        cout << "Result = " << sum << endl;
    }
    return 0;
}
