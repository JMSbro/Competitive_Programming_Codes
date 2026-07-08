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
        string s, t;
        cin >> s;
        t = s;
        reverse(s.begin(), s.end());
        if(t == s) cout << "Yes! It is palindrome!" << endl;
        else cout << "Sorry! It is not palindrome!" <<endl;
    }
    return 0;
}
