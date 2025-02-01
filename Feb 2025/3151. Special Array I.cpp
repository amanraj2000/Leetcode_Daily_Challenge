class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        int n = nums.size();
        bool ans = true;
        for(int i = 1; i < n; i++){
            if(nums[i]%2 == nums[i-1]%2) ans = false;
        }
        return ans;
    }
};