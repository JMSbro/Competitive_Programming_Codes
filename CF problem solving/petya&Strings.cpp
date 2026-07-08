#include<iostream>
using namespace std;
char sa[110], sb[110];

int main()
{

    scanf(" %s", sa);
    scanf(" %s", sb);
    int len = 0;
    while(sa[len] != '\0'){
        len++;
    }
    int iseq = 0;
    for(int i = 0; i < len ;i++)
    {
       if(sa[i] >= 'A' && sa[i] <= 'Z') sa[i] += 32;
       if(sb[i] >= 'A' && sb[i] <= 'Z') sb[i] += 32;
        if(sa[i] - sb[i] != 0){
            if(sa[i] - sb[i] > 0) {
                    iseq = 1;
                    break;
            }
            else {iseq = - 1;
            break;
            }
        }
    }
    cout << iseq;
    return 0;
}
