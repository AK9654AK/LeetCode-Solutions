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
    
    
    int check(TreeNode* r,int &maxi){
        
        if(!r)return 0;
        
        int ld=check(r->left,maxi);
        int rd=check(r->right,maxi);
        
        maxi=max(maxi,ld+rd);
        return max(ld,rd)+1;
    }
    
    
    int diameterOfBinaryTree(TreeNode* root) {
        
        
        if(!root)return 0;
        int maxi=-1;
        int ans=check(root,maxi);
        
        return maxi;
    }
};