#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--){
    char s[123];
    scanf("%s", s);

    int len = 0;
    while( s[len] != 0){
        len++;
    }

   if( len > 10){
    printf("%c%d%c\n", s[0], len - 2, s[len - 1]);
   }
   else printf("%s\n", s);
    }

    return 0;
}

