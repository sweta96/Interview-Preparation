/* https://leetcode.com/explore/interview/card/top-interview-questions-medium/108/trees-and-graphs/786/
    Binary Tree Inorder Traversal  */

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> inorder;
        vector<TreeNode*> stack;
        TreeNode* temp=NULL;
        int top=-1;
        if(root==NULL)
            return inorder;
        else
        {
            stack.push_back(root);
            top++;
            while(top>=0)
            {
                if(stack[top]->left!=NULL)
                {
                    stack.push_back(stack[top]->left);
                    stack[top]->left=NULL;
                    top++;
                }
                else
                {
                    inorder.push_back(stack[top]->val);
                    temp=stack[top];
                    if(temp->right!=NULL)
                        stack[top]=temp->right;
                    else
                    {
                        auto it = stack.end();
                        it--;
                        stack.erase(it);
                        top--;
                    }
                }
            }
        }
        return inorder;
    }
};
