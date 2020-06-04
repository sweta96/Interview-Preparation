/* https://leetcode.com/explore/interview/card/top-interview-questions-medium/108/trees-and-graphs/787/
    Binary Tree Zigzag Level Order Traversal   */

class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<pair<TreeNode*,int>> stack;
        vector<vector<int>> result1;
        if(root==NULL)
            return result1;
        int top=-1;
        pair<TreeNode*, int> temp;
        pair<TreeNode*, int> temp1;
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
        int len = stack[top-1].second+1;
        vector<vector<int>> result;
        int level=0;
        vector<int> res;
        for(int i=0;i<top;i++)
        {
            temp=stack[i];
            if(level!=temp.second)
            {
                result.push_back(res);
                res.clear();
            }
            level=temp.second;
            if((level)%2==0)
                res.push_back((temp.first)->val);
            else
                res.insert(res.begin(),(temp.first)->val);
        }
        result.push_back(res);
        return result;
    }
};
