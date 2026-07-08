#include<bits/stdc++.h>
using namespace std;

vector<int> v = {0,0,0,1,1};
vector<int> nums = {1,2,2,3,3,3,5,7,9};

int isOk(int id, int x) { //this function will check if the element 
    // can be considered in terms of 0 or 1, if we had turned the 
    //array in to 0 & 1 where for smaller or eqal elemnts of desired elemt,
    // we will consider them as 0 and for bigger elemts will consider them as 1
    //so if we want to check for 3, nums will be = {0,0,0,0,0,0,1,1,1}
    //but we will modify this function for different scenarios.
    if(nums[id] < x) return 0;
    else return 1;
}

int main(){

	int n = 5;

    //we will try to find first idx of 0 & last idx of 1.
    /*
    int l = 0, r = n;
    while(l < r){
        int mid = (l + r) / 2;
        if(v[mid] == 0) l = mid + 1;
        else r = mid;
    }
    int ans0 = l - 1;
    int ans1 = l;
    cout << ans0 << ' ' << ans1 << endl;
    */

    // leetcode problem for nums vector to find the pos of an elemnt.
    int l = 0, r = n;
    int x;
    cin >> x;
    bool isok(int mid ) {

    }
    int l = 0, r = n, ans = 0;
    while(l < r){
        int mid = l + (r - l) / 2;
        if(isOk(mid) == 0) {
            l = mid + 1;
        }
        else {
            r = mid;
        }
    }
    int ans = l;
    cout << ans << endl;

    //PROBLEM: ekta pc er bug er jonne ekta sorted arr er ekta range er
    // elemts  gula inverted sort hoye gese.

    /* function will be : 
    suppose nums[] = {56, 50, 10, 5, 60, 67, 100000}
    
    int isOk(int id) {
        if(nums[id] <= nums[0]) return 0;
        else return 1;
    }
    
    int l = 0, r = n;
    int x;
    cin >> x;
    while(l < r){
        int mid = (l + r) / 2;
        if(isOk(mid) == 0) l = mid + 1;
        else r = mid;
    }
    int ans = l;
    cout << ans - 1 << endl;
    */
    
    return 0;    
}