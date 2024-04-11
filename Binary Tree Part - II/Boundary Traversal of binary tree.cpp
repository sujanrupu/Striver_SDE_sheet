//Link: https://www.geeksforgeeks.org/problems/boundary-traversal-of-binary-tree/1

class Solution {
public:
    void printLeft(Node *root, vector<int>& ans) {
        if(!root || (!root->left && !root->right))   return ;
        ans.push_back(root->data);
        if(root->left)  printLeft(root->left, ans);
        else    printLeft(root->right, ans);
    }
    
    void printLeaf(Node *root, vector<int>& ans) {
        if(!root)   return ;
        if(!root->left && !root->right)
            ans.push_back(root->data);
        printLeaf(root->left, ans);
        printLeaf(root->right, ans);
    }
    
    void printRight(Node *root, vector<int>& ans) {
        if(!root || (!root->left && !root->right))  return ;
        if(root->right) printRight(root->right, ans);
        else
            printRight(root->left, ans);
        ans.push_back(root->data);
    }

    vector <int> boundary(Node *root)
    {
        vector<int>ans;
        if(!root)   return ans;
        ans.push_back(root->data);
        printLeft(root->left, ans);
        printLeaf(root->left, ans);
        printLeaf(root->right, ans);
        printRight(root->right, ans);
        return ans;
    }
};
