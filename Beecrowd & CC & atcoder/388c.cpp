#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction cout << fixed << setprecision
#define mem(a,b) memset(a,b,sizeof(a))

int main()
{
    optimize();
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll ans = 0;
    for (int i = n - 1, cur = n - 2; i >= 0; i--) {
        if (cur == i) {
            cur = i - 1;
        }
        while(cur >= 0 && a[cur] > a[i] / 2) {
            cur--;
        }
        if (cur < 0) break;
        ans += cur + 1;

    }
    cout << ans << '\n';
    return 0;
}

