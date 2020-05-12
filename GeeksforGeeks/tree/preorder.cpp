/*https://practice.geeksforgeeks.org/problems/preorder-traversal/1/
    Preorder Traversal */
    
void preorder(Node* root)
{
  if(root!=NULL)
  {
        cout<<root->data<<" ";
        if(root->left!=NULL)
            preorder(root->left);
        if(root->right!=NULL)
            preorder(root->right);
  }
}
