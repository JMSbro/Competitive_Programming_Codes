#include<bits/stdc++.h>
using namespace std;
char mn[110], rev[110];

int main()
{
    scanf(" %s", mn);
    scanf(" %s", rev);

    int len1 = strlen(mn);
    int lenj = strlen(rev);
    bool crt = true;
    for ( int i = 0, j = lenj - 1; (i < len1 && j >= 0); i++, j--){
       if(len1 != lenj) {
        crt = false;
        break;
       }
        else if(mn[i] != rev[j]){
                crt = false;
                break;
        }

    }
    (crt) ? cout << "YES" << endl : cout << "NO" << endl;
    return 0;
}

