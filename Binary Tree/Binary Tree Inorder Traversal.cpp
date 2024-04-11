//Link: https://leetcode.com/problems/binary-tree-inorder-traversal/description/

class Solution {
public:
    void solve(TreeNode* root, vector<int>& ans) {
        if(!root)   return ;
        solve(root->left, ans);
        ans.push_back(root->val);
        solve(root->right, ans);
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        if(!root)   return ans;
        solve(root, ans);
        return ans;
    }
};
