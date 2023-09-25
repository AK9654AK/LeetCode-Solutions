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
    
    
     int check(TreeNode *r, int &m){
         
        
        if(r==NULL)return 0;
        
        int l=check(r->left,m);
        int ri=check(r->right,m);
        
         m=max(m,l+ri);
         
         
         return 1+max(l,ri);
         
        
     }
    
   
    
    int diameterOfBinaryTree(TreeNode* root) {
        
        int maxi=0;
        
        check(root,maxi);
        return maxi;
        
    }
};