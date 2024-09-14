/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {

    String preorder(TreeNode t) {
        String preorder = "";
        if (t == null)
            return "null";
        preorder = preorder + String.valueOf(t.val) + preorder(t.left) + preorder(t.right);
        return preorder;
    }

    public boolean isSameTree(TreeNode p, TreeNode q) {
        if ((p == null && q != null) || (q == null && p != null))
            return false;
        if (p == null && q == null)
            return true;
        if (p.val != q.val)
            return false;
        String preorderP = preorder(p);
        String preorderQ = preorder(q);
        if(preorderP.equals(preorderQ))
            return true;
        else
            return false;
    }
}
