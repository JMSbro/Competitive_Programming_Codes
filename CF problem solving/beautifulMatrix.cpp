#include<iostream>

using namespace std;

int main()
{
    int mat[10][10];
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 5; j++){
            cin >> mat[i][j];
        }
    }

     for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 5; j++){
            if(mat[i][j] == 1){
                    int x, y;
                if(i - 3 < 0) x = (i - 3) * - 1;
                else x = i - 3;
                if(j - 3 < 0) y = (j -3) * - 1;
                else y = j - 3;

                cout << x + y << endl;
            }
        }
    }
    return 0;
}
