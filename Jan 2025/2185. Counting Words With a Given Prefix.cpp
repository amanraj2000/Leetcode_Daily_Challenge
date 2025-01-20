class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int n = pref.length();
        int n1 = words.size();
        int ans = 0;
        for(int i = 0; i < n1; i++){
            string word = words[i];
            if(word.length() >= n){
                string s = word.substr(0, n);
                if(s == pref) ans++;
            }
        }
        return ans;
    }
};