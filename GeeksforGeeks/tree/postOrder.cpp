/* https://practice.geeksforgeeks.org/problems/postorder-traversal/1/
  PostOrder Traversal  */

void postOrder(Node* root)
{
    if(root!=NULL)
    {
        if(root->left!=NULL)
            postOrder(root->left);
        if(root->right!=NULL)
            postOrder(root->right);
        cout<<root->data<<" ";
    }
}
