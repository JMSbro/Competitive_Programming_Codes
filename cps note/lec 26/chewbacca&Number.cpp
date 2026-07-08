#include<stdio.h>
#include<string.h>

char a[25];

int main()
{
    scanf(" %s", a);
    int len = strlen(a);

    char temp = a[0];

    for(int i = 0; i < len; i++){
        if(a[i] > '4') a[i] = ( '9' -  a[i] ) + '0' ;
    }
    if(a[0] == '0') a[0] = temp;
    printf("%s", a);

    return 0;
}
