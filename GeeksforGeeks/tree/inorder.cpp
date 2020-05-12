/*https://practice.geeksforgeeks.org/problems/inorder-traversal/1
    Inorder Traversal  */

void inorder(Node* root)
{
    if(root!=NULL)
    {
        if(root->left!=NULL)
            inorder(root->left);
        cout<<root->data<<" ";
        if(root->right!=NULL)
            inorder(root->right);
    }
}
