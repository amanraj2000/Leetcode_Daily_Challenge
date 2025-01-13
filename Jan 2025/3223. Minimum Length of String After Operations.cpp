class Solution {
public:
    int minimumLength(string s) {
        array<int, 26> a {};
        int n = s.length();
        int ans = 0;
        for(int i = 0; i < n; i++) a[s[i] - 'a']++;
        for(int i = 0; i < 26; i++){
            ans += (a[i] > 0 ? (a[i] & 1 ? 1 : 2) : 0);
        }
        return ans;
    }
};