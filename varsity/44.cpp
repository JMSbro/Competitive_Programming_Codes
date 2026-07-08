#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction cout << fixed << setprecision
#define mem(a,b) memset(a,b,sizeof(a))
ll a[51][51];
void st()
{
    a[1][0] = 1;
    a[2][0] = 1;
    a[2][1] = 1;
    int j;
    for(int i = 3; i <= 51; i++)
    {
        a[i][0] = 1;
        for( j = 0; j < i - 1; j++){
            a[i][j] = a[i-1][j-1] + a[i-1][j];
        }
        a[i][j] = 1;
    }
}
int main()
{
    optimize();
    st();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i = 1; i <= n + 1; i++){
            if(i == 1) cout << a[i][0] << endl;
            else if(i == 2) cout << a[i][0] << " " << a[i][1] << endl;
            else {
                for(int j = 0; j < i; j++){
                    if(j == i - 1) cout << a[i][j] << endl;
                    else cout << a[i][j] << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}
