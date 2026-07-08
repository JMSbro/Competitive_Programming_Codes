#include<bits/stdc++.h>
using namespace std;
#define int long long


 int dis(int n, vector<int> &a) {
    for(int i = 0; i < n - 1; ++i) {
        if(a[i] < a[i + 1]) return false;
    }
    return true;
 }


 int inc(int n, vector<int>&a) {
    for(int i  = 0; i < n - 1; ++i) {
        if(a[i] > a[i + 1])
        return false;
    }
    return true;
 }
 
void solve() {

  int n;
  cin >> n;
  vector<int>a(n);
  for(int i = 0; i < n; ++i) cin >> a[i];
  for(int i = 0; i + 1 < n; ++i) {
    if(abs(a[i] - a[i + 1]) <= 1) {
        cout << "0" << endl;
        return;
    }
  }
  if(inc(n, a) or dis(n, a)) {
    cout << "-1" << endl;
    return;
  }
  cout << "1" << endl;


}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t = 1;
    cin >> t;
    while(t--) solve();

    return 0;
}
