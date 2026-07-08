#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define fraction() cout<<fixed<<setprecision(5);
typedef long long ll;
typedef double dl;
const int mx = 110;
int a[mx];
using namespace std;

int main()
{
    optimize();
    int n, cnt = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] == 1) cnt++;
    }
    if(cnt > 0) cout << "HARD" << endl;
    else cout << "EASY" << endl;
    return 0;
}

