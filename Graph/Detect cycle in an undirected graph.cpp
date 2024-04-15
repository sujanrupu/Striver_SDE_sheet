//Link: https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1

class Solution {
  public:
    bool solve(int src, vector<int> adj[], unordered_map<int, bool>& vis) {
        unordered_map<int, int>parent;
        queue<int>q;
        vis[src] = 1;
        parent[src] = -1;
        q.push(src);
        while(!q.empty()) {
            int node = q.front();   q.pop();
            parent[src] = true;
            for(auto it : adj[node]) {
                if(!vis[it]) {
                    q.push(it);
                    vis[it] = 1;
                    parent[it] = node;
                }
                else if(it != parent[node])
                    return true;
            }
        }
        return false;
    }
    
    bool isCycle(int V, vector<int> adj[]) {
        unordered_map<int, bool>vis;
        for(int i=0; i<V; i++) {
            if(!vis[i]) {
                bool ans = solve(i, adj, vis);
                if(ans) return true;
            }
        }
        return false;
    }
};
