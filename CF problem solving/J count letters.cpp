#include<iostream>
using namespace std;

const int mx = 1e7+123;
char a[mx];
int cnt[30];

int main()
{
    scanf("%s", a);

    int i = 0;
    while ( a[i] != 0){
        cnt[a[i] - 'a']++;
        i++;
    }

    for(int i = 0; i < 26; i++){
        if(cnt[i] > 0){
            char c = i + 'a';
            printf("%c : %d\n", c, cnt[i]);
        }
    }

    return 0;
}
