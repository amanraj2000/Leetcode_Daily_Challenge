class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int n = words.size();
        int ans = 0;
        for(int i = 0; i < n; i++){
            int n1 = words[i].length();
            for(int j = i + 1; j < n; j++){
                int n2 = words[j].length();
                if(i != j && n1 <= n2){
                    string prefix = words[j].substr(0, n1);
                    string suffix = words[j].substr(n2 - n1, n1);
                    if(prefix == words[i] && suffix == words[i]) ans++;
                }
            }
        }
        return ans;
    }
};