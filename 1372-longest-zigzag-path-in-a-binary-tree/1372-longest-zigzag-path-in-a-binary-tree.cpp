/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int res = 0;
    void dfs(TreeNode* root,int cur,int left) {
        res = max(res,cur);
        if(root->left){
            if(left!=0) {
                dfs(root->left,cur+1,0);
            }
            else {
                dfs(root->left,1,0);
            }
        }
        if(root->right){
            if(left!=1) {
                dfs(root->right,cur+1,1);
            }
            else {
                dfs(root->right,1,1);
            }
        }
    }
    int longestZigZag(TreeNode* root){
        dfs(root,0,-1);
        return res;
    }
};