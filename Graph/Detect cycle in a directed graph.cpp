//Link: https://www.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1

class Solution {
  public:
    bool solve(int src, vector<int>adj[], unordered_map<int, bool>& vis, unordered_map<int, bool>& dfsVis) {
        vis[src] = 1;
        dfsVis[src] = 1;
        for(auto it : adj[src]) {
            if(!vis[it]) {
                bool ans = solve(it, adj, vis, dfsVis);
                if(ans) return true;
            }
            else if(dfsVis[it] == true) return true;
        }
        dfsVis[src] = false;
        return false;
    }
    bool isCyclic(int V, vector<int> adj[]) {
        unordered_map<int, bool>vis, dfsVis;
        for(int i=0; i<V; i++) {
            if(!vis[i]) {
                bool ans = solve(i, adj, vis, dfsVis);
                if(ans) return true;
            }
        }
        return false;
    }
};
