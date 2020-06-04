/* https://leetcode.com/explore/interview/card/top-interview-questions-medium/108/trees-and-graphs/789/
      Populating Next Right Pointers in Each Node  */

class Solution {
public:
    Node* connect(Node* root) {
        vector<pair<Node*,int>> stack;
        if(root==NULL || root->left==NULL)
            return root;
        int top=-1;
        pair<Node*, int> temp;
        pair<Node*, int> temp1;
        temp.first=root;
        temp.second=0;
        stack.push_back(temp);
        top++;
        while(top<stack.size())
        {
            temp1=stack[top];
            if((temp1.first)->left!=NULL)
            {
                temp.first=(temp1.first)->left;
                temp.second=temp1.second+1;
                stack.push_back(temp);
            }
            if((temp1.first)->right!=NULL)
            {
                temp.first=(temp1.first)->right;
                temp.second=temp1.second+1;
                stack.push_back(temp);
            }
            top++;
        }
        for(int i=0;i<top-1;i++)
        {
            temp=stack[i];
            temp1=stack[i+1];
            if(temp.second==temp1.second)
                (temp.first)->next=temp1.first;
        }
        return root;
    }
};
