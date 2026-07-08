
//In the name of ALLAH
//upperBound apprach
//  0 0 0 0 1 1 1 1 er first 1 er index chassi...
#include<bits/stdc++.h>
using namespace std;

int isok(long long mid, long long y){
    long long sum = mid * (mid + 1) / 2;
    if(sum < y) return 0;
    return 1;
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--){
        long long y;
        scanf("%lld", &y);
        long long l = 0, r = y;
        while(l < r){
            long long mid = (l + r) / 2;
            if(isok(mid,y) == 0) l = mid + 1;
            else r = mid;
        }
        if(l * (l + 1) / 2 == y) printf("%lld\n" , l);
        else printf("NAI\n");
    }
    return 0;
}
