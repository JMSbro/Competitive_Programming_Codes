#include<bits/stdc++.h>
using namespace std;
const int mx = 110;
char name[mx];
int freq[130];
int main()
{
    scanf(" %s", name);
    int len = strlen(name);

    for(int i = 0; i < len; i++){
        freq[name[i]]++;
    }
    int cnt = 0;
    for(int i = 97; i <= 122 ; i++){
        if(freq[i] > 0) cnt++;
    }

    if(cnt % 2 != 0) cout << "IGNORE HIM!" << endl;
    else cout << "CHAT WITH HER!" << endl;


    return 0;
}

