#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    int cnt = 0;
    string s,t;
    cin>>k>>s>>t;
    int j = 0;
    int size = s.size()-t.size();
    if( abs(size) > 1){
        cout<<"No"<<endl;
        return 0;
    }

    if(s.size() == t.size()){
        for(int i = 0;i<s.size();i++){
            if(s.at(i) != t.at(i)){
                cnt++;
            }
        }
    }
    else if(s.size() > t.size()){
        for(int i = 0;i<t.size();){
            if(j>=s.size()){
                break;
            }
            if(j < s.size() and s.at(j) != t.at(i)){
                cnt++;
            }
            else{
                i++;
            }
            j++;
        }
    }
    else{
        for(int i = 0;i<s.size();){
            if(j>=t.size()){
                break;
            }
            if(j < t.size() and s.at(i) != t.at(j)){
                cnt++;
            }
            else{
                i++;
            }
            j++;
        }
    }

    if(cnt >1){
        cout<<"No"<<endl;
    }
    else{
        cout<<"Yes "<< cnt << endl;
    }
}
