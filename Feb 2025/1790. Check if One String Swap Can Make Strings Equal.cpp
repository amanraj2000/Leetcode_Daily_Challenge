class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1 == s2) return true;
        int n = s1.length();
        int cnt = 0;
        int a[2], j = 0;
        for(int i = 0; i < n; i++){
            if(s1[i] != s2[i]){
                cnt++;
                if(j < 2) a[j++] = i;
            }
        }
        if(cnt == 2){
            char c = s1[a[0]];
            s1[a[0]] = s1[a[1]];
            s1[a[1]] = c;
            return s1 == s2;
        }
        return false;
    }
};