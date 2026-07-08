#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int b, p, f, h, c, mxprc, mxpat, minprc, minpat;
        cin >> b >> p >> f;
        cin >> h >> c;

        if(h >= c ){
            mxprc = h;
            mxpat = p;
            minprc = c;
            minpat = f;
        }
        else{
            mxprc = c;
            mxpat = f;
            minprc = h;
            minpat = p;
        }

        int tb = b / 2;
        int tprcmx = 0,tprcmin = 0, rem = 0, tprc = 0;
        if(mxpat >= tb){
            tprcmx = (tb * mxprc);
        }
        else{
            rem = tb - mxpat;
            tprcmx = (mxpat * mxprc);
        }

        if(rem > 0){
            if(minpat >= rem){
                tprcmin = (rem * minprc);
            }
            else {
                    tprcmin = (minpat * minprc);
            }
        }
        tprc = tprcmx + tprcmin;

        if(b < 2) {
            cout << 0 << endl;
        }
        else cout << tprc << endl;
    }
    return 0;
}
