#include<iostream>
using namespace std;

int a[1123][3];
int cnt[1123];

int main()
{
    int t;
    cin >> t;

    for( int i = 0; i < t; i++){
        for( int j = 0; j < 3; j++){
            cin >> a[i][j];
        }
    }

    for( int i = 0; i < t; i++){
        for( int j = 0; j < 3; j++){
            if( a[i][j] == 1){
                cnt[i]++;
            }
        }
    }

    int track;
    for( int i = 0; i < t; i++ ){
        if( cnt[i] > 1) track++;
    }

    cout << track << endl;
    return 0;
}
