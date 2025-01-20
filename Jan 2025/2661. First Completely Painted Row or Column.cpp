class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<pair<int,int>> v(n*m + 1);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                v[mat[i][j]] = {i, j};
            }
        }
        int s = arr.size();
        vector<int> rows(n, 0);
        vector<int> cols(m, 0);
        for(int i = 0; i < s; i++){
            auto it = v[arr[i]];
            int row = it.first;
            int col = it.second;
            rows[row]++;
            cols[col]++;
            if(rows[row] == m || cols[col] == n) return i;
        }
        return 0;
    }
};