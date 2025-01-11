class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        int n1 = words1.size();
        int n2 = words2.size();
        vector<string> ans {};
        ans.reserve(n1);
        array<int,26> a {};
        for(int i = 0; i < n2; i++){
            string word = words2[i];
            int n = word.length();
            int b[26] = {};
            for(int j = 0; j < n; j++) b[word[j] - 'a']++;
            for(int j = 0; j < 26; j++) a[j] = max(a[j], b[j]);
        }
        for(int i = 0; i < n1; i++){
            string word = words1[i];
            int n = word.length();
            bool include = true;
            int b[26] = {};
            for(int j = 0; j < n; j++){
                b[word[j] - 'a']++;
            }
            for(int j = 0; j < 26; j++){
                if(b[j] < a[j]) include = false;
            }
            if(include) ans.push_back(move(word));
        }
        return ans;

    }
};