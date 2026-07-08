#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction cout << fixed << setprecision
#define mem(a,b) memset(a,b,sizeof(a))
#define pb push_back()

bool cmp(dl a, dl b, dl en = 1e-12)
{
    return fabs(a - b) < en;
}
int main()
{
    optimize();
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    bool ck = true;
    for(int i = 0; i < n - 2; i++){
        if((ll)powl(v[i+1],2) != (ll)v[i]*v[i+2]) ck = false;
        }
        if(ck) cout << "Yes" << endl;
        else cout << "No" << endl;
        cout << v[0] << v[1] << v[2];
        cout << endl;
    return 0;
}
