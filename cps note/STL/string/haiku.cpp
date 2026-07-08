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
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}
int main()
{
    optimize();
    int cnt[] = {5,7,5};
    vector<string> v;
    for(int i = 0;i < 3;i++){
        string s;
        getline(cin,s);

        v.push_back(s);
    }
    for(int i = 0;i < 3;i++){
            int c = 0;
        for(auto u : v[i]){
            if(isv(u)) c++;
        }
        if(c != cnt[i]) return cout << "NO\n",0;
    }
    cout << "YES\n";
    return 0;
}
