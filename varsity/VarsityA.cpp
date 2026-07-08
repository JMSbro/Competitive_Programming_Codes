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
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        if(a < b) cout << a << " " <<b << endl;
        else cout << b << " " << a << endl;
    }
    return 0;
}

