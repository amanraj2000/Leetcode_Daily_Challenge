class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n = nums.size();
        int ans = nums[0], res = nums[0];
        for(int i = 1; i < n; i++){
            if(nums[i] > nums[i - 1]) res += nums[i];
            else{
                ans = max(ans, res);
                res = nums[i];
            }
            ans = max(ans, res);
        }
        return ans;
    }
};