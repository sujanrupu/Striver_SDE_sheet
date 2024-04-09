//Link: https://www.geeksforgeeks.org/problems/flattening-a-linked-list/1

Node *solve(Node *a, Node *b) {
    if(!a)  return b;
    if(!b)  return a;
    Node *ans = NULL;
    if(a->data < b->data) {
            ans = a;
            a->bottom = solve(a->bottom, b);
        }
        else {
            ans = b;
            b->bottom = solve(a, b->bottom);
        }
    return ans;
}
    
Node *flatten(Node *root)
{
   if(!root)    return root;
   return solve(root, flatten(root->next));
}
