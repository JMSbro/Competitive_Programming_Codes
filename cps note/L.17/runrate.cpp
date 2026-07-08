#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int r1, r2, B;
        cin >> r1 >> r2 >> B;
        double crr = r2 / (50.0 - (B / 6.0));
        double rrr = (r1 - r2 +1) / (B / 6.0);

        cout << fixed<< setprecision(2) << crr << " " << fixed<< setprecision(2) << rrr << endl;
    }
    return 0;


}
