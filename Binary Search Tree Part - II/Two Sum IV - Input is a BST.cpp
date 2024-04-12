//Link: https://leetcode.com/problems/two-sum-iv-input-is-a-bst/description/

class Solution {
public:
    void inOrder(TreeNode *root, vector<int>& ans) {
        if(!root)   return ;
        inOrder(root->left, ans);
        ans.push_back(root->val);
        inOrder(root->right, ans);
    }

    bool findTarget(TreeNode* root, int k) {
        vector<int>ans;
        inOrder(root, ans);
        int start = 0, end = ans.size()-1;
        while(start < end) {
            int sum = ans[start] + ans[end];
            if(sum == k) {
                return true;
            }
            if(sum < k)
                start++;
            else
                end--;
        }
        return false;
    }
};
