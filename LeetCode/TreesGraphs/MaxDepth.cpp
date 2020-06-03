/* https://leetcode.com/explore/featured/card/top-interview-questions-easy/94/trees/555/
    Maximum Depth of Binary Tree   */

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL)
            return 0;
        if(root->left==NULL && root->right==NULL)
            return 1;
        int l=0,r=0,depth;
        if(root->left!=NULL)
            l=1+maxDepth(root->left);
        if(root->right!=NULL)
            r=1+maxDepth(root->right);
        depth=(l>r)?l:r;
        return depth;
    }
};
