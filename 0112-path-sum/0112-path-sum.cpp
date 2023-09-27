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
    
//     int check(TreeNode *r,int &ans,int &t){
        
//         int lt=max(0,check(r->left,ans,t));
//         int rt=max(0,check(r->right,ans,t));
        
//         if(lt+rt==t)ans=1;
        
//         return r->val+lt+rt;
        
//     }
    
    
    
    bool hasPathSum(TreeNode* root , int targetSum) {
        
        int ans=0;
        if(root==NULL)return 0;
        
        // int rsum=targetSum-root->val;
        int lt=hasPathSum(root->left,targetSum-root->val);
        int rt=hasPathSum(root->right,targetSum-root->val);
        
        if(root->left==NULL and root->right==NULL)return (targetSum==root->val);
        
        return lt||rt;
    }
};