
class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int n = s.length();
        vector<int> start_i(26, n);
        vector<int> end_i(26, -1);
        for(int i = 0; i < n; i++){
            int idx = s[i] - 'a';
            start_i[idx] = min(i, start_i[idx]);
            end_i[idx] = max(i, end_i[idx]);
        }
        int ans = 0;
        for(char c = 'a'; c <= 'z'; c++){
            int start = start_i[c - 'a'];
            int stop = end_i[c - 'a'];//cout<<start<<" "<<stop<<endl;
            if(stop > start){
                int l = start + 1;
                vector<int> v(26, 0);
                int cnt = 0;
                while(l < stop){//cout<<l<<" "<<c<<endl;
                    int ii_ = s[l] - 'a';
                    if(v[ii_] == 0){
                        v[ii_] = 1;
                        cnt++;
                    }
                    l++;
                }
                ans += cnt;
            }
        }
        return ans;
    }
};