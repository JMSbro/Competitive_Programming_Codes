#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    char s[a];
    scanf(" %s", s);
    int cnt = 0;
    for(int i = 0, j = 1; i < a - 1; i++ , j++){
        if(s[i] == s[j]) cnt++;
    }
    cout << cnt << endl;

}
