#include <iostream>
using namespace std;
int main()
{
    while(1){
        int H,W;
        cin >> H>> W;
        if(H == 0 && W == 0){
            break;
        }
         for(int i = 1; i <= W; i++) cout << "#" ;
         cout << endl;
         for ( int k = 2; k <= H-1; k++){
        for(int j = 1;j <= W ; j++)
           {
                if (j == 1 || j == W){
                 cout << "#";
                }
                else cout << ".";
                }
                cout << endl;
         }
           for(int i = 1; i <= W; i++) cout << "#" ;
         cout << endl << endl;
    }
    return 0;
}
