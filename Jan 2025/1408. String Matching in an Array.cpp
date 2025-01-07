class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        int n = words.size();
        vector<string> ans;
        for(int i = 0; i < n; i++){
            string word = words[i];
            for(int j = 0; j < n; j++){
                if(i != j){
                    int temp = words[j].find(word);
                    if(temp != string::npos){
                        ans.push_back(word);
                        break;
                    }
                }
            }
        }
        return ans;
    }
};