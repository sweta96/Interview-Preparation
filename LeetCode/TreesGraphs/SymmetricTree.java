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
    String reverse(String s) {
        String result = "";
        for (int i=s.length()-1; i>=0;i--) {
            result = result + s.charAt(i);
        }
        return result;
    }

    String inorderL(TreeNode t) {
        String inorder = "";
        if (t.left == null)
            inorder = inorder + "l";
        else 
            inorder = inorder + inorderL(t.left);
        inorder = inorder + String.valueOf(t.val);
        if (t.right == null)
            inorder = inorder + "r";
        else 
            inorder = inorder + inorderL(t.right);
        return inorder;
    }

    String inorderR(TreeNode t) {
        String inorder = "";
        if (t.right == null)
            inorder = inorder + "l";
        else 
            inorder = inorder + inorderR(t.right);
        inorder = inorder + String.valueOf(t.val);
        if (t.left == null)
            inorder = inorder + "r";
        else 
            inorder = inorder + inorderR(t.left);
        return inorder;
    }

    public boolean isSymmetric(TreeNode root) {
        if (root == null)
            return true;
        if ((root.left == null && root.right != null) || (root.left != null && root.right == null))
            return false;
        if (root.left == null && root.right == null)
            return true;
        if (root.left.val != root.right.val)
            return false;
        if(inorderL(root.left).equals(inorderR(root.right)))
            return true;
        else
            return false;
    }
}
