#include <stdio.h>
int main(){
int T;
scanf("%d", &T);
while(T--){
    int N, fact = 1;
    scanf("%d", &N);
    if(N==0){
        printf("1\n");
    }
    else{
    for(int i = 1; i <= N; i++){

        fact = fact * i;

        }
        printf("%d\n", fact);
    }
}
    return 0;
}
