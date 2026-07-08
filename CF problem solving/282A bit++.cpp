#include<stdio.h>

int main()
{
    int x = 0;
    char s[10];
    int t;
    scanf("%d", &t);

    while(t--){
        scanf("%s", s);
        if(s[1] == '+') x++;
        else x--;
    }
    printf("%d\n", x);
    return 0;
}
