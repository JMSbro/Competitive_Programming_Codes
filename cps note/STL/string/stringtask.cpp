#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction cout << fixed << setprecision
#define mem(a,b) memset(a,b,sizeof(a))
bool isv(char c)
{
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y');
}
int main()
{
    optimize();
    string s, ans;
    cin >> s;
    for(auto u : s){
        char c = tolower(u);
        if(isv(c) == 0){
            ans += '.';
            ans += c;
        }
    }
    cout << ans << endl;
    return 0;
}
