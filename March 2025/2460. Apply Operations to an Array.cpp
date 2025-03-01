class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n - 1; i++){
            if(nums[i] == nums[i + 1]){
                nums[i] *= 2;
                nums[i + 1] = 0;
            }
        }
        for(int i = 1; i < n; i++){
            if(nums[i - 1] == 0 && nums[i] != 0){
                int k = i - 1;
                while(k >= 0 && nums[k] == 0){
                    swap(nums[k], nums[k + 1]);
                    k--;
                }
            }
        }
        return nums;
    }
};