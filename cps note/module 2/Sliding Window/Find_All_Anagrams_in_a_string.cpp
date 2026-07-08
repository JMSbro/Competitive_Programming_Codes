
//In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

/// no debugger for stack , queue and priority queue. also no iterator for them
int main()
{
    optimize();
    string s, p;
    cin >> s >> p;
    
    vector<int> cnt_p(26, 0);
    vector<int> cnt_w(26, 0);
 
    for(char c: p){
        cnt_p[c-'a']++;
    }
 
    int n = s.size();
    int k = p.size();
 
    for(int i = 0; i < k; i++){
        cnt_w[s[i]-'a']++;
    }

    int match_cnt = 0;
 
    for(int i = 0; i < 26; i++){
        if(cnt_p[i] == cnt_w[i]){
            match_cnt++;
        }
    }
 
    for(int i = 0; i < n; i++){
        if(match_cnt == 26){
            cout << i << " ";
        }
 
        int x = s[i]-'a';
        if(cnt_w[x] == cnt_p[x]) match_cnt--;
        cnt_w[x]--;
        if(cnt_w[x] == cnt_p[x]) match_cnt++;
 
        if(i+k >= n){
            break;
        }
 
        int y = s[i+k]-'a';
        if(cnt_w[y] == cnt_p[y]) match_cnt--;
        cnt_w[y]++;
        if(cnt_w[y] == cnt_p[y]) match_cnt++;
    }
 
    cout << endl;

    /* O(26n)
    for(int i = 0; i < n; i++){
        bool matched = true;
        for(int j = 0; j < 26; j++){
            if(cnt_p[j] != cnt_w[j]){
                matched = false;
                break;
            }
        }
        if(matched) {
            cout << i << ' ';
        }

        cnt_w[s[i] - 'a']--;
        if(i+k >= n){
            break;
        }
        cnt_w[s[i+k]-'a']++;
    }
    cout << endl;*/
    return 0;
}
