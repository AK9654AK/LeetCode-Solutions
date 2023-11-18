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
    bool isValidBST(TreeNode* root) {
        return check(root,LONG_MAX,LONG_MIN);
    }
    
    bool check(TreeNode* root,long maxi,long mini){
        if(root==NULL)return true;
        if(root->val>=maxi or root->val<=mini)return false;
        return (check(root->left,root->val,mini) and check(root->right,maxi,root->val));
    }
};