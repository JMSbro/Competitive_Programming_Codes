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
        ll n, k;
        cin >> n >> k;
        ll y = n;
        unsigned long long leaf = n * n;
        for(int i = 1; i <= (n-(k+1)); i++ ){
            y--;
            leaf += y*y;

        }
        if(leaf % 2 == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}

