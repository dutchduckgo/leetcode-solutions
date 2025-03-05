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
    public List<Integer> inorderTraversal(TreeNode root) {
        List<Integer> ls = new ArrayList<>();
        if (root == null) return ls;
        trav(root, ls);
        return ls;
    }
    private void trav(TreeNode n, List<Integer> ls) {
        if (n.left == null && n.right == null) {
            ls.add(n.val);
            return;
        }
        if (n.left != null) trav(n.left, ls);
        ls.add(n.val);
        if (n.right != null) trav(n.right, ls);
    }
}
