#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction cout << fixed << setprecision
#define mem(a,b) memset(a,b,sizeof(a))
const int mx = 1e5+123;
int a[mx], mp[mx];
int main()
{
    optimize();
    int t;
    cin >> t;
    while(t--){
int n, b;
int m = 0, sum = 0;
cin >>n;
for(int i = 1; i <= n ; i++){
cin >> b;
if(mp[b] != 0){
sum -= mp[b];
}
mp[b] = i;
sum += i;


}

cout << sum << endl;
mem(mp,0);
    }
    return 0;
}
