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
    
    
    int check(TreeNode* abhi){
        
        
         if(abhi==NULL)return 0;
        
        int l=check(abhi->left);
        int r=check(abhi->right);
        
        
        if(l==-1 or r==(-1) or abs(l-r)>1)return -1;

        
        
        return 1+max(l,r);
    }
    
    
    
    
    bool isBalanced(TreeNode* root) {
       
       if(check(root)==-1)return false;
        return true;
        
    }
};