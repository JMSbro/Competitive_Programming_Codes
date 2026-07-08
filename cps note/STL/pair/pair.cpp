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
    pair<int,int> p;
    p.first = 4;
    p.second = 5;
    cout << p.first << " " << p.second << endl;
    p = make_pair(9,8);
    cout << p.first << " " << p.second << endl;
    p = {78, 98};
    cout << p.first << " " << p.second << endl;
    pair<string, vector<int>> o;
    o = { "jahin" , {2,3,4} };
    p.first++;
    for(auto u : o.second) cout << u << " ";
    cout << endl << p.first << " " << o.second.size() << endl;
    pair<int , int> p1,p2;
    p1 = {7,6};
    p2 = {5,6};
    if(p1 < p2) cout << "yes" << endl;
    else cout << "no" << endl;
    p = min(p1,p2);
    cout << p.first << " " << p.second << endl;
    p = max(p1,p2);
    cout << p.first << " " << p.second << endl;

    /*vector<pair<string,int>> v;
    for(int i = 0; i < 3; i++){
        string s;
        int a;
        cin >> s >> a;
        v.push_back({s,a});
    }
    for(auto u : v) cout << u.first << " " << u.second << endl;*/

    pair<string, vector<int>> pa, pb;
    pa = {"aa", {4,2,6}};
    pb = {"aa",{4,2,3}};
    if(pa> pb) cout << pa.first << ' ' << pa.second[2]<< endl;
    else cout << pb.first  << ' ' << pb.second[2]<< endl;


    return 0;
}
