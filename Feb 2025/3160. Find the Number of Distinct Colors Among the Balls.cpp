class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        vector<int> ans;
        unordered_map<int,int> mp;
        int n = queries.size();
        ans.reserve(n);
        unordered_map<int,int> col;
        int cnt = 0;
        for(int i = 0; i < n; i++){
            int x = queries[i][0];
            int y = queries[i][1];
            if(col.find(x) != mp.end()){
                mp[col[x]]--;
                if(mp[col[x]] == 0) cnt--;
            }
            mp[y]++;
            col[x] = y;
            if(mp[y] == 1) cnt++;
            ans.push_back(cnt);
        }
        return ans;
    }
};