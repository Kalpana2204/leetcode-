class Solution {
public:
    bool dfs(int node, int color, vector<int>& vis, vector<vector<int>>& graph) {
        vis[node] = color;

        for (int neigh : graph[node]) {
            if (vis[neigh] == 0) {
                if (!dfs(neigh, 3 - color, vis, graph))
                    return false;
            }
            else if (vis[neigh] == color)
                return false;
        }

        return true;
    }

    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> vis(n, 0);

        for (int i = 0; i < n; i++) {
            if (vis[i] == 0) {
                if (!dfs(i, 1, vis, graph))
                    return false;
            }
        }

        return true;
    }
};