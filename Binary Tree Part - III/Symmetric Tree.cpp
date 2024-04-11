//Link: https://leetcode.com/problems/symmetric-tree/description/

class Solution {
public:
    bool solve(TreeNode *a, TreeNode *b) {
        if(!a && !b)    return true;
        if(!a || !b)    return false;
        if(a->val != b->val)    return false;
        return solve(a->left, b->right) && solve(a->right, b->left);
    }

    bool isSymmetric(TreeNode* root) {
        if(!root)   return true;
        return solve(root->left, root->right);
    }
};
