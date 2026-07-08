#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define fraction(a) fixed<<setprecision(a)<<
#define mem(a,b) memset(a,b,sizeof(a))
typedef long long ll;
typedef double dl;
const int mx = 3e5+10;
ll mat[mx];
int main()
{
    optimize();
    int a;
    cin >> a;
    while(a--){
        int n,m;
        cin >> n >> m;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                if( n == m){
                    if(j == i) mat[j] = 3;
                    else mat[j] = 2;
                    cout << mat[j] << " ";
                }
                else {
                    if(i == 1) {
                        if(j == 1) mat[j] = 2;
                        else mat[j] = 3;
                    }
                    else {
                        if(j == 1) mat[j] = 3;
                        else mat[j] = 2;
                    }
                    cout << mat[j] << " ";
                }

            }
            cout << endl;
            mem(mat,0);
        }
    }

    return 0;
}

