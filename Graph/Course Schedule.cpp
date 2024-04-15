//Link: https://leetcode.com/problems/course-schedule/description/

class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& prerequisites) {
        unordered_map<int, int>indegree;
        vector<int>adj[n];
        for(auto it : prerequisites)
            adj[it[0]].push_back(it[1]);
        for(int i=0; i<n; i++) {
            for(auto it : adj[i])
                indegree[it]++;
        }
        queue<int>q;
        for(int i=0; i<n; i++) {
            if(indegree[i] == 0)    
                q.push(i);
        }
        vector<int>ans;
        while(!q.empty()) {
            int node = q.front();   q.pop();
            ans.push_back(node);
            for(auto it : adj[node]) {
                indegree[it]--;
                if(indegree[it] == 0)
                    q.push(it);
            }
        }
        if(ans.size() == n) return true;
        else    return false;
    }
};
