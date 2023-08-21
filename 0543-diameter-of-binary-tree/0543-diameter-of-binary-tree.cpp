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
    
    int check(TreeNode 
              *r,int &maxi){
        
        if(r==NULL)return 0;
        int lt=check(r->left,maxi);
        int rt=check(r->right,maxi);
        maxi=max(maxi,lt+rt);
        
        
        return 1+max(lt,rt);
    }
    
    
    int diameterOfBinaryTree(TreeNode* root) {
        
        if(root==NULL)return 0;
        
        int maxi=0;
        check(root,maxi);
        return maxi;
        
        
    }
};