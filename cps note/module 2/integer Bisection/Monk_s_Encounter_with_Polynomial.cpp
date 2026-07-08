
//In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int isok(ll mid, ll a, ll b, ll c, ll k){
    ll sum = (a*mid*mid) + (b*mid) + c;
    if(sum < k) return 0;
    return 1;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        long long a, b, c, k;
        cin >> a >> b >> c >> k;
        long long l = 0, r = 1e5; // k highest 10^10 hobe to function e 10^5 dile square hoye 10^10 hoyei jabe
        while(l < r){
            long long mid = (l + r) / 2;
            if(isok(mid,a, b, c, k) == 0) l = mid + 1;
            else r = mid;
        }
        cout << l << endl;
    }
    return 0;
}