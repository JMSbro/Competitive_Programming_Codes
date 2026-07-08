#include <bits/stdc++.h>
using namespace std;
 
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, target;
    cin >> n >> target;

    int x[n+1];

    for(int i = 1; i <= n; i++){
        cin >> x[i];
    }

    map<int, int> mp;

    for(int i = 1; i <= n; i++){
        for(int j = i+1; j <= n; j++){
            int req = target - x[i] - x[j];
            if(mp.count(req)){
                cout << mp[req] << " " << i << " " << j << endl;
                return 0;
            }
        }

        mp[x[i]] = i;
    }

    cout << "IMPOSSIBLE\n";
    
    return 0;
}