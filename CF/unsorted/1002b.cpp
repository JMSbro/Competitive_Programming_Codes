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
        set<int> a, b;
        int n;
        cin >> n;
        for(int i = 0; i < n; i++){
            int d;
            cin >> d;
            a.insert(d);
        }
        for(int i = 0; i < n; i++){
            int d;
            cin >> d;
            b.insert(d);
        }
        int sa = a.size();
        int sb = b.size();
        if(sb == 1 && sa >= 3) cout << "yes" << endl;
        else if(sb == 2 && sa >= 2) cout << "yes" << endl;
        else if(sb >= 3) cout << "yes" << endl;
        else cout << "no" << endl;
    }
    return 0;
}

