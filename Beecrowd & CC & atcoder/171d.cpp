#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n)
#define mem(a,b) memset(a,b,sizeof(a))
#define pb push_back()

int main()
{
    optimize();
    int t;
    cin >> t;
    while(t--){
        int n, r = 0, g = 0, b = 0;
        cin >> n;
        string s;
        cin >> s;
        int cnt = 0, stop = (n-(n%3));
        if(stop == n) stop--;
        for(int i = 0; i <= stop; i++){
            int id = i + 1;
            if(s[i] == 'R') r++;
            else if(s[i]== 'G') g++;
            else b++;
            if(id % 3 ==0){
                if(r != 1) cnt += r - 1;
                else if(g != 1)cnt += g - 1;
                else if(b != 1)cnt += b - 1;
                r = 0; g = 0; b = 0;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}

