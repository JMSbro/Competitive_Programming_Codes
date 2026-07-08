#include<iostream>
using namespace std;



int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        char s[110];
        scanf("%s", s);
        bool check = false;

        for(int i = 1; i <= n -1; i++){
            if( n % i == 0){
                int j = n/i - 1;
                int cnt = i;
                int counter = 0;

                for(int i = 0; i < cnt; i += j){
                    if(s[i] != s[i+j]) counter++;
                }

                if(counter == i){
                    check = true;
                    break;
                }
            }
        }
        if(check) cout << "yes" << endl;
        else cout << "no" << endl;
    }
    return 0;
}
