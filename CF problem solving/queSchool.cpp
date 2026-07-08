#include<bits/stdc++.h>
using namespace std;
char q[55];
int main()
{
    int n, t;
    cin >> n >> t;

    for(int i = 0;i < n; i++){
        scanf(" %c", &q[i]);
    }

    q[n] == '\0';
    for(int i = 0; i < t; i++){
        for(int j = 0; j < n; ){
            if(q[j] == 'B' && q[j+1] == 'G'){
                swap(q[j],q[j+1]);
                j+=2;
            }
            else j++;

        }
    }
           for(int i = 0;i < n; i++){
        printf("%c", q[i]);
    }

    return 0;
}
