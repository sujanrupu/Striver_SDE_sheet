//Link: https://leetcode.com/problems/diameter-of-binary-tree/description/

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(!root)   return 0;
        int left = maxDepth(root->left);
        int right = maxDepth(root->right);
        int ans = max(left, right) + 1;
        return ans;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        if(!root)   return 0;
        int left = diameterOfBinaryTree(root->left);
        int right = diameterOfBinaryTree(root->right);
        int both = maxDepth(root->left) + maxDepth(root->right);
        int ans = max(left, max(right, both));
        return ans;
    }
};
