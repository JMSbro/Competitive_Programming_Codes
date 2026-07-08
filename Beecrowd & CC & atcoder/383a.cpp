#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction()cout << fixed << setprecision()
#define mem(a,b) memset(a,b,sizeof(a))

int main()
{
    optimize();
    int n, t[110], v[110], vr;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> t[i] >> v[i];
    }
    vr = v[1];
    for(int i = 2; i <= n; i++){
        vr = vr - (t[i] - t[i-1]);
        if(vr < 0) vr = 0;
        vr = vr + v[i];
    }
    cout << vr << endl;
    return 0;
}
