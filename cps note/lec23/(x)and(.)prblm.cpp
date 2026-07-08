#include<stdio.h>
#include<stdbool.h>

    char s[112][112];

int main()
{
    int n,m;
    scanf("%d %d", &n, &m);



    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++ ){
            scanf(" %c", &s[i][j]);
        }
    }

    int r, c;
    scanf("%d %d", &r, &c);
    bool ok = true;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(i == r && j == c){

                if(i <= n && j <= m && i-1 >= 1 && j-1 >= 1 && s[i-1][j-1] == '.'){
                    ok = false;
                    break;
                }
                if(i <= n && j <= m && i-1 >= 1 && j >= 1 && s[i-1][j] == '.'){
                    ok = false;
                    break;
                }
                if(i <= n && j <= m && i-1 >= 1 && j+1 >= 1 && s[i-1][j+1] == '.'){
                    ok = false;
                    break;
                }
                if(i <= n && j <= m && i >= 1 && j-1 >= 1 && s[i][j-1] == '.'){
                    ok = false;
                    break;
                }
                if(i <= n && j <= m && i >= 1 && j+1 >= 1 && s[i][j+1] == '.'){
                    ok = false;
                    break;
                }
                if(i <= n && j <= m && i+1 >= 1 && j-1 >= 1 && s[i+1][j-1] == '.'){
                    ok = false;
                    break;
                }
                if(i <= n && j <= m && i+1 >= 1 && j >= 1 && s[i+1][j] == '.'){
                    ok = false;
                    break;
                }
                if(i <= n && j <= m && i+1 >= 1 && j+1 >= 1 && s[i+1][j+1] == '.'){
                    ok = false;
                    break;
                }
            }

        }
    }

    (ok) ? printf("yes\n") : printf("no\n");


    return 0;
}
