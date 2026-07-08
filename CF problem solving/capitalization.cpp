#include<bits/stdc++.h>
using namespace std;
const int mx = 1100;
char a[mx];
int main()
{
    scanf(" %s", a);

    if(a[0] >= 'a' && a[0] <= 'z') {
        a[0] -= 32;
    }

    printf("%s\n", a);
    return 0;
}
