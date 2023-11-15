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
    
        public int globalcount = 0;
public int result = 0;
public int kthSmallest(TreeNode root, int k) {
if(root == null) return 0;
kthSmallest(root.left, k);
globalcount++;
if(globalcount == k) result = root.val;
kthSmallest(root.right, k);
return result;
}
    
}