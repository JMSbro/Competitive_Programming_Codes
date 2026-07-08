#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction()cout << fixed << setprecision()
#define mem(a,b) memset(a,b,sizeof(a))
int  arr[100];
int main()
{
    optimize();
    int a;
    string s;
    bool ck = true;
    cin >> a >> s;
    for(int i = 0; i < a; i++){
        if(s[i] >= 'A' && s[i] <= 'Z') arr[s[i] - 'A']++;
        else arr[s[i] - 'a']++;
    }
    for(int i = 0; i < 26; i++){
        if(arr[i] == 0) ck = false;
    }
    if(ck) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
