#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction cout << fixed << setprecision
#define mem(a,b) memset(a,b,sizeof(a))

int st(int n)
{
    return (n*(n+1))/2;
}
int main()
{
    optimize();
    int t;
    cin >> t;
    while(t--){
        int n, sum = 0;
        cin >> n;

        for(int i = 0;i < n - 1; i++){
            int a;
            cin >> a;
            sum += a;
        }
        cout << st(n) - sum << endl;
    }
    return 0;
}
