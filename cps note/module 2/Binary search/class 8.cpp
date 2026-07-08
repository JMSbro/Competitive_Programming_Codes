#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> v = {1, 2, 2, 3, 4, 7, 7, 20, 30, 31};
	int x;
	cin >> x;
    int n = v.size();
    
    //THIS IS LOWERBOUND
    // int l = 0, r = n - 1;
    // while(l < r){
    //     int mid = (l + r) / 2;
    //     cout << l << ' ' << r << " mid : " << mid << endl;
    //     if(v[mid] < x) l = mid + 1;
    //     else if(v[mid] >= x) r = mid;
    //     cout << "after : "<< l << ' ' << r << endl;
    // }
    // cout << l << ' ' << r << endl; 
    //  will return in 0 based indexing
    // we are finding leftmost elements position

    // To get the rightmost index (coded by me)
    // while(l < r){
    //     int mid = (l + r) / 2;
    //     cout << l << ' ' << r << " mid : " << mid << endl;
    //     if(v[mid] <= x) l = mid + 1 ;
    //     else if(v[mid] > x) r = mid - 1;
    //     cout << "after : "<< l << ' ' << r << endl;
    // }
    // cout << l << ' ' << r << endl;

    //UPPERBOUND , to get the next IDX of rightmost element.
    int l = 0, r = n;// ekhane r == n nite hobe.
    while(l < r){
        int mid = (l + r) / 2;
        cout << l << ' ' << r << " l&r before op,  mid : " << mid << endl;
        if(v[mid] <= x) l = mid + 1 ;
        else if(v[mid] > x) r = mid ;
        cout << "after op : "<< l << ' ' << r << endl;
    }
    // 7 die test kortesi, 7 na thakle 20 er idx show korto
    cout << l - 1<< ' ' << r - 1 << endl; // ekhane -1 kore actual idx ber korsi
    //upper and lowerbound ber korte amra left(l) ans hisebe out dissi.

    int upidx = upper_bound(v.begin(), v.end(), x) - v.begin();
    int lowidx = lower_bound(v.begin(), v.end(), x) - v.begin();
    cout << "up : " << upidx << ' ' << "low : " << lowidx << endl;
}
