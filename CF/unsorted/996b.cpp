#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n; ++i)
        cin >> b[i];
    for (int i = 0; i < n; ++i)
    {
        if (b[i] > a[i])
        {
            int need = b[i] - a[i];
            for (int j = 0; j < n; ++j)
            {
                if (i != j && (a[j] - b[j] < need))
                {
                    cout << "NO\n";
                    return;
                }
            }
        }
    }
    cout << "YES\n";
}
int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
