class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size();
        long int sum = 0;
        for(int i = 0; i < n; i++) sum += nums[i];
        long int res = 0;
        int ans = 0;
        for(int i = 0; i < n - 1; i++){
            res += nums[i];
            sum -= nums[i];
            if(res >= sum) ans++;
        }
        return ans;
    }
};