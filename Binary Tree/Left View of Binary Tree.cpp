//Link: https://www.geeksforgeeks.org/problems/left-view-of-binary-tree/1

void solve(Node *root, int res, vector<int>& ans) {
    if(!root)   return ;
    if(res == ans.size())   ans.push_back(root->data);
    solve(root->left, res+1, ans);
    solve(root->right, res+1, ans);
}

vector<int> leftView(Node *root)
{
   vector<int>ans;
   solve(root, 0, ans);
   return ans;
}
