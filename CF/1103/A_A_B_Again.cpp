#include<stdio.h>

int main(){
    int t; scanf("%d", &t);
    while(t--){
        int a;
    scanf("%d", &a);
    
    int b = 0;
    while(a){
        b += a%10;
        a /= 10;
    }
    printf("%d \n", b);
    }
    
    return 0;
}