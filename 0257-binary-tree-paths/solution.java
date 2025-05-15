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
    public List<String> binaryTreePaths(TreeNode root) {
        ArrayList<String> rslt = new ArrayList<>();
        StringBuilder curPath = new StringBuilder();
        help(root, curPath, rslt);
        return rslt;
    }

    private void help(TreeNode n, StringBuilder curPath, ArrayList<String> rslt) {
        int len = curPath.length();
        
        if (len > 0) {
            curPath.append("->");
        } 
        curPath.append(n.val);
        
        if (n.left == null && n.right == null) {
            rslt.add(curPath.toString());
        }

        else {
            if (n.left != null) help(n.left, curPath, rslt);
            if (n.right != null) help(n.right, curPath, rslt);
        }
        curPath.setLength(len);
    }
}
