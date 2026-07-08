#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define fraction() cout<<fixed<<setprecision(5);
typedef long long ll;
typedef double dl;
const int mx = 1e5+10;
int a[mx];
using namespace std;

int main()
{
    optimize();
    int n ;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        for(int j = i + 1; j <= n; j++){
            if(j = i + 1) cnt++;
            else {
                for(int k = i+1; k<j; k++ ){
                    if(a[k] <= a[i] && a[k] <= a[j]) cnt++;
                }
            }
        }
        if(i == n) cout << 0 << endl;
        else cout << cnt << " ";
    }


    return 0;
}

