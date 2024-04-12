//Link: https://www.geeksforgeeks.org/problems/kth-largest-element-in-bst/1

class Solution
{
    public:
    void inOrder(Node *root, vector<int>& ans) {
        if(!root)   return ;
        inOrder(root->left, ans);
        ans.push_back(root->data);
        inOrder(root->right, ans);
    }
    
    int kthLargest(Node *root, int K)
    {
        vector<int>ans;
        inOrder(root, ans);
        
        for(int i=0; i<ans.size(); i++) {
            if(i == (ans.size() - K))
                return ans[i];
        }
        return -1;
    }
};
