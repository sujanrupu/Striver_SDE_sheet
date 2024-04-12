//Link: https://leetcode.com/problems/validate-binary-search-tree/description/

class Solution {
public:
    void inOrder(TreeNode *root, vector<int>& ans) {
        if(!root)   return ;

        inOrder(root->left, ans);
        ans.push_back(root->val);
        inOrder(root->right, ans);
    }

    bool isValidBST(TreeNode* root) {
        vector<int>ans;
        inOrder(root, ans);
        for(int i=0; i<ans.size()-1; i++) {
            if(ans[i+1] <= ans[i])
                return false;
        }
        return true;
    }
};
