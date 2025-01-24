class Solution {
private:
    void dfs(int node, vector<vector<int>>& graph, vector<int>& vis, vector<int> &safe_state){
        vis[node] = 1;
        if(graph[node].size() == 0){
            safe_state[node] = 1;
            return;
        }
        bool isSafe = true;
        for(auto it: graph[node]){
            if(vis[it] == 0){
                dfs(it, graph, vis, safe_state);
            }
            if(safe_state[it] == 0) isSafe = false;
        }
        safe_state[node] = isSafe;
    }
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> safe_state(n, 0);
        vector<int> vis(n, 0);
        for(int i = 0; i < n; i++){
            if(vis[i] == 0){
                dfs(i, graph, vis, safe_state);
            }
        }
        vector<int> ans;
        for(int i = 0; i < n; i++) if(safe_state[i]) ans.push_back(i);
        return ans;
    }
};