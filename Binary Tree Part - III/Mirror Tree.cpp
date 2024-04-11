//Link: https://www.geeksforgeeks.org/problems/mirror-tree/1

class Solution {
  public:
    void mirror(Node* node) {
        if(node == NULL)    return ;
        
        mirror(node->left);
        mirror(node->right);
        
        Node* root = node->left;
        node->left = node->right;
        node->right = root;
    }
};
