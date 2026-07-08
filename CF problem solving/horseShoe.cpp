#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define fraction(a) fixed<<setprecision(a)<<
#define mem(a,b) memset(a,b,sizeof(a))
typedef long long ll;
typedef double dl;


int main()
{
    optimize();
    ll a[5];
    for(int i = 1; i<= 4; i++){
        cin >> a[i];
    }
    int cnt = 0;
    for(int i = 1; i <= 4; i++){
        for(int j = i + 1; j <= 4; j++){
            if(a[i] == a[j]) cnt++;
        }
    }

    if(cnt == 1) cout << 1 << endl;
    else if(cnt == 3 || cnt == 2) cout << 2 << endl;
    else if(cnt == 6) cout << 3 << endl;
    else if(cnt == 0) cout << 0 << endl;
    return 0;
}

