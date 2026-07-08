#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    if(!(cin >> t)) return 0;
    while(t--) {
        string s;
        cin >> s;
        int n = (int)s.size();
        string best = ""; // store best string (same length)
        // iterate all first swaps (i < j)
        for (int i = 0; i < n; ++i) {
            for (int j = i+1; j < n; ++j) {
                string s1 = s;
                swap(s1[i], s1[j]);
                // iterate all second swaps (k < l) on s1
                for (int k = 0; k < n; ++k) {
                    for (int l = k+1; l < n; ++l) {
                        string s2 = s1;
                        swap(s2[k], s2[l]);
                        if (best == "" || s2 > best) best = s2;
                    }
                }
            }
        }
        // It's possible that n>=2 but no swap pairs? (not the case here) 
        // However we must always perform exactly two swaps; above loops cover all.
        // Print numeric value (remove leading zeros)
        long long val = stoll(best);
        cout << val << '\n';
    }
    return 0;
}
