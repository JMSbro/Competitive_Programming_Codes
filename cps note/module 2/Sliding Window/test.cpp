#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
multiset<int> ms1, ms2;
 
void balance(){
    int sz = ms1.size() + ms2.size();
 
    int sz1 = (sz+1)/2;
    int sz2 = sz-sz1;
 
    while(ms1.size()>sz1){
        int val = *ms1.rbegin();
        ms2.insert(val);
        ms1.erase(ms1.find(val));
    }
 
    while(ms2.size()>sz2){
        ms1.insert(*ms2.begin());
        ms2.erase(ms2.begin());
    }
}
 
void add(int v){
    if(ms1.empty()){
        ms1.insert(v);
    }
    else {
        int mx = *ms1.rbegin();
        if(v < mx){
            ms1.insert(v);
        }
        else {
            ms2.insert(v);
        }
    }
 
    balance();
}
 
void remove(int v){
    if(ms1.find(v)!=ms1.end()){
        ms1.erase(ms1.find(v));
    }
    else {
        ms2.erase(ms2.find(v));
    }
 
    balance();
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n, k;
    cin >> n >> k;
 
    int x[n];
 
    for(int i = 0; i < n; i++){
        cin >> x[i];
    }
 
    for(int i = 0; i < k; i++){
        add(x[i]);
    }
 
    for(int i = 0; i < n; i++){
        cout << *ms1.rbegin() << " ";
 
        remove(x[i]);
        if(i+k<n){
            add(x[i+k]);
        }
        else break;
    }
    cout << endl;
 
    return 0;
}