/* https://practice.geeksforgeeks.org/problems/level-order-traversal/1/
    Level Order Traversal   */

void levelOrder(Node* node)
{
    vector<struct Node*> nodes;
    if(node!=NULL)
    {
        nodes.push_back(node);
        int it = 0;
        while(it<nodes.size())
        {
            struct Node* temp=NULL;
            temp=nodes[it];
            if(temp->left!=NULL)
                nodes.push_back(temp->left);
            if(temp->right!=NULL)
                nodes.push_back(temp->right);
            cout<<temp->data<<" ";
            it++;
        }
    }
}
