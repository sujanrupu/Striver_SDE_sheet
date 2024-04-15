//Link: https://www.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1

class Solution {
  public:
    void dfs(int src, unordered_map<int, bool>& vis, vector<int>adj[], vector<int>& ans) {
        vis[src] = 1;
        ans.push_back(src);
        for(auto it : adj[src]) {
            if(!vis[it])
                dfs(it, vis, adj, ans);
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        unordered_map<int, bool>vis;
        vector<int>ans;
        for(int i=0; i<V; i++) {
            if(!vis[i])
                dfs(i, vis, adj, ans);
        }
        return ans;
    }
};
