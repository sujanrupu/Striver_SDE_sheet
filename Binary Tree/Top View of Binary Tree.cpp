//Link: https://www.geeksforgeeks.org/problems/top-view-of-binary-tree/1

class Solution
{
    public:
    vector<int> topView(Node *root)
    {
        vector<int>ans;
        if(!root)   return ans;
        queue<pair<Node*, int>>q;
        q.push({root, 0});
        map<int, int>mp;
        while(!q.empty()) {
            Node *front = q.front().first; int fdata = q.front().second;    q.pop();
            if(mp.find(fdata)==mp.end())
                mp[fdata] = front->data;
            if(front->left)     q.push({front->left, fdata-1});
            if(front->right)    q.push({front->right, fdata+1});
        }
        
        for(auto it : mp)
            ans.push_back(it.second);
        return ans;
    }

};
