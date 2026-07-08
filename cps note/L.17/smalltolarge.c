#include <stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    for(int i = 1; i <= T; i++)
    {
        int n1,n2,n3;
        scanf("%d %d %d",&n1, &n2, &n3);
        if(n1 > n2)
        {
            int x = n1;
            n1 = n2;
            n2 = x;
        }
        if(n2 > n3){
            int y = n2;
            n2 = n3;
            n3 = y;
        }
        if(n1 > n2){
            int z = n1;
            n1 = n2;
            n2 = z;
        }
        printf("Case %d: %d %d %d\n", i, n1, n2, n3);
    }
    return 0;
}
