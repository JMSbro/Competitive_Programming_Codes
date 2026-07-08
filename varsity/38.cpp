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
        int n, x;
        cin >> n >> x;
        int h = ((2*n - 1) / 2) + 1, k =0;
        for(int i = 1; i <= (2 * n -1); i++){
            if(i <= h) k++;
            else k--;
            for(int j = 1; j <= k; j++){
                if(j == k) cout << x << endl;
                else cout << x << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
