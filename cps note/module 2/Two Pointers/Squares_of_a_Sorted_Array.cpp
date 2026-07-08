class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int l = 0, r = nums.size()-1;
        vector<int> v;
 
        while(1){
            if(nums[l]*nums[l] > nums[r]*nums[r]){
                v.push_back(nums[l]*nums[l]);
                l++;
            }
            else {
                v.push_back(nums[r]*nums[r]);
                r--;
            }
 
            if(r<l){
                break;
            }
        }
 
        reverse(v.begin(), v.end());
 
        return v;
    }
};