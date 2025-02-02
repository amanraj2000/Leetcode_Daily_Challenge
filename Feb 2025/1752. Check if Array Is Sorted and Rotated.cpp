class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        bool ans = true;
        int j = 0;
        while(j < n - 1){
            if(nums[j] > nums[j + 1]) break;
            j++;
        }
        if(j == n - 1) return true;
        while(i < n -1){
            if(nums[i] > nums[i + 1]){
                i++; break;
            }
            i++;
        }
        while(i < n - 1){
            if(nums[i] > nums[i + 1]){
                ans = false;
                break;
            }
            i++;
        }
        if(nums[0] < nums[n - 1]) ans = false;
        return ans;
    }
};