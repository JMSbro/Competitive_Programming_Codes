#include<iostream>
using namespace std;

const int mx = 1e6+10;
char p[mx];
int ch[26];
char fhalf[mx/2];

int main()
{
    scanf(" %s", p);
    int n = 0;
    while(p[n] != '\0'){
        n++;
    }

    for(int i = 0; i < n; i++){
        ch[p[i] - 'A']++;
    }

    int cnt = 0;
    for(int i = 0; i < 26; i++){
        if(ch[i] % 2 != 0) cnt++;
    }

    if(cnt > 1){
        cout << "NO SOLUTION\n";
    }
    else {
            char middle = '\0';
    int idx = 0;
    for(int i =0; i < 26; i++){
        if(ch[i] % 2 != 0) middle = i + 'A';

        for(int j = 0; j < ch[i]/2; j++){
            fhalf[idx++] = i + 'A';
        }
    }
    fhalf[idx] = 0;
    printf("%s", fhalf);

    if(middle != '\0'){
        printf("%c", middle);
    }

    for(int i = idx - 1; i >= 0; i-- ){
        printf("%c", fhalf[i]);
    }
    }
    cout << endl;
    return 0;
}
