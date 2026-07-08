#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n, target;
    cin >> n >> target;
 
    int x[n+1];
    vector<pair<int, int>> v;
 
    for(int i = 1; i <= n; i++){
        cin >> x[i];
        v.push_back({x[i], i});
    }

    sort(v.begin(), v.end());
 
    int l = 0, r = n-1;
    // for(auto &u: v){
    //     cout << u.first << " " << u.second << endl;
    // }
    while(l < r){
        while(l < r && v[l].first + v[r].first < target){
            l++;
        }
        if(l >= r) break;
        while(l < r && v[l].first + v[r].first > target){
            r--;
        }
        if(l >= r) break;
        if(v[l].first + v[r].first == target){
            cout << v[l].second << " " << v[r].second << endl;
            return 0;
        }
 
        r--;
    }
 
    cout << "IMPOSSIBLE\n";
    
    return 0;
}