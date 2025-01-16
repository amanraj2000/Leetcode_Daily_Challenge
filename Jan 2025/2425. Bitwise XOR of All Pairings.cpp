class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        int ans = 0, res1 = 0, res2 = 0;
        for(int i = 0; i < n; i++) res1 ^= nums1[i];
        for(int i = 0; i < m; i++) res2 ^= nums2[i];
        if(n & 1) ans ^= res2;
        if(m & 1) ans ^= res1;
        return ans;
    }
};