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
    vector<string> v;
    v = { "Shahriar", "Shahriar", "Momo", "Momo", "Sharif", "Sharif" };
	int Sz = unique ( v.begin(), v.end() ) - v.begin();


	cout << Sz << endl; /// Number of unique strings in vector v;
	for ( int i = 0; i < Sz; i++ ) cout << v[i] << endl; /// Prints all unique strings in vector v
    cout << endl;
    sort(v.begin(), v.end());
    for(auto u : v) cout << u << endl;
    cout << v.size() << endl;

    int i = 2345;
    string s = to_string(i);
    cout << s << endl;

    s = "546536";
    i = stoi(s);
    cout << i << endl;

    s = "sdgdgf mjjruf sdfhgh";
    string name = "jjjjajjhjjinjjjj";
    copy(s.begin() + 6, s.begin() + 13, back_inserter(name));
    cout << name << endl << name.size() << endl;

    s = name;
    s.erase(remove(s.begin(),s.end(),'j'), s.end());
    cout  << s << endl;

    cout << s.find("hin") << endl << s.find("ahin") << endl << s.find("hfhdhg") << endl;
    return 0;
}
