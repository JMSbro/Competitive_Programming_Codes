#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define fraction() cout<<fixed<<setprecision(5);
typedef long long ll;
typedef double dl;

using namespace std;

int main()
{
    optimize();
    char p, q;
    cin >> p >> q;
    int a['G'];
    a['A'] = 0; a['B'] = 3; a['C'] = 1; a['D'] = 4; a['E'] = 1; a['F'] = 5; a['G'] = 9;
    int sum = 0;
    int mx = max(p,q);
    int mn = min(p,q);
    for(int i = mn; i <= mx; i++){
        sum+=a[i];
    }
    cout << sum << endl;
    return 0;
}

