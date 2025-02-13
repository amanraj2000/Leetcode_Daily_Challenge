class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n = nums.size();
        priority_queue<long int, vector<long int>, greater<long int>> pq;
        for(int i = 0; i < n; i++) pq.push(nums[i]);
        int ans = 0;
        while(pq.top() < k){
            long int x1 = pq.top();
            pq.pop();
            long int x2 = pq.top();
            pq.pop();
            long int res = min(x1, x2)*2 + max(x1, x2);
            pq.push(res);
            ans++;
        }
        return ans;
    }
};