#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define fraction() cout<<fixed<<setprecision(5);
typedef long long ll;
typedef double dl;

using namespace std;

int main()
{
    optimize();
    char s[100];
    scanf(" %s", s);
    int len = strlen(s);
    s[len] = '\0';
    for(int i = 0; i < len; i++){

        if(s[i] == '.'){
            for(int j = i; j < len; j++){
                s[j] = s[j+1];

            }
            i--;
        }
    }
    cout << s << endl;
    return 0;
}

