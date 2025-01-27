class Solution {
    #define INT_MAX 10000
public:
    vector<bool> checkIfPrerequisite(int numCourses, vector<vector<int>>& prerequisites, vector<vector<int>>& queries) {
         vector<vector<int>> dist(numCourses, vector<int>(numCourses, INT_MAX));

        for (int i = 0; i < numCourses; ++i) {
            dist[i][i] = 0;
        }

        for (const auto& edge : prerequisites) {
            dist[edge[0]][edge[1]] = 1;
        }

        for (int k = 0; k < numCourses; ++k) {
            for (int i = 0; i < numCourses; ++i) {
                for (int j = 0; j < numCourses; ++j) {
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }

        vector<bool> ans;
        for (const auto& query : queries) {
            ans.push_back(dist[query[0]][query[1]] < INT_MAX);
        }

        return ans;
    }
};