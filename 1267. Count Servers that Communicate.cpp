class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int n = grid.size();;
        int m = grid[0].size();
        vector<int> row(n, 0);
        vector<int> col(m, 0);
        for(int i = 0; i < n; i++){
            int rc = 0;
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 1) rc++;
            }
            row[i] = rc;
        }
        for(int i = 0; i < m; i++){
            int cc = 0;
            for(int j = 0; j < n; j++){
                if(grid[j][i] == 1) cc++;
            }
            col[i] = cc;
        }
        int ans = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 1 && (row[i] > 1 || col[j] > 1)) ans++;
            }
        }
        return ans;
    }
};