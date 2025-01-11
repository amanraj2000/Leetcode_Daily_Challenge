class Solution {
public:
    bool canConstruct(string s, int k) {
        int n = s.length();
        if(n == k) return true;
        if(n < k) return false;
        array<int, 26> a {};
        for(int i = 0; i < n; i++) a[s[i] - 'a']++;
        int odd = 0, even = 0;
        for(int i = 0; i < 26; i++){
            if(a[i] != 0 && (a[i] & 1) != 0) odd++;
            else if(a[i] != 0 && (a[i] & 1) == 0) even++; 
        }
        if(k >= odd) return true;
        else return false;
    }
};