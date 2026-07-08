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
    int t;
    cin >> t;
    while(t--){
        int n, k, x;
        string s;
        cin >> n >> x >> k >> s;
        int inv = 0, ans =0;
        for(int i = 0;i < s.size();i++){
            if(s[i] == '1') inv++;
            else {
                ans+= inv;
            }
        }
        if(ans % k == 0) cout << 1 << endl;
        else cout << 2 << endl;
    }
    return 0;
}
