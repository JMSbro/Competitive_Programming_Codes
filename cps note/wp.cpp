#include <stdio.h>

const int mx = 100123;
int a[mx];
int cnt[mx];

int main(){
    int n;
    int x = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n*4-1; i++){
        scanf("%d", &a[i]);
    }


    for(int i = 1; i <= n*4-1; i++){
        cnt[a[i]]++;
        
    }
    for(int i = 1; i <= n*4-1; i++){
        if(cnt[a[i]] != 4){
            x = a[i];
        }
    }

    printf("%d", x);
    return 0;
    
    
}