#include <stdio.h>

int main()
{
    int n;
    scanf("%d\n",&n);
    int a;
    int maxn = -1000123;
    int minn = 1000123;
    long long sum = 0;
    while(n--){

        scanf("%d",&a);
        sum += a;
        if(a > maxn){
            maxn = a;
        }
        if(a < minn){
            minn = a;
        }
    }
printf("%d %d %lld\n", minn, maxn, sum);

    return 0;
}
