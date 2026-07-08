#include<iostream>
#include<string.h>
using namespace std;
char s[110];
int main()
{
    scanf(" %s", s);
    int len = strlen(s);

    int c1 = 0, c2 = 0, c3 = 0;
    for(int i = 0; i < len; i += 2){
        if(s[i] == '1') c1++;
        else if(s[i] == '2') c2++;
        else if(s[i] == '3') c3++;
    }
    int tlen = c1 + c2 + c3;
    for(int i = 0; i < tlen; i++){
       if(i < c1) {
        if(c2 == 0 && c3 == 0) {
            if(i == c1 - 1) cout << "1" << endl;
            else cout << "1+";
        }
        else cout << "1+";
       }
       else if(i >= c1 && i < c1 + c2) {
        if(c3 == 0){
            if(i == c1 + c2 - 1) cout << "2" << endl;
            else cout << "2+";
        }
        else cout << "2+";
       }
       else if(i >= c1 + c2 ){
        if(i == tlen -1) cout << "3" << endl;
        else cout << "3+";
       }
    }


    return 0;
}
