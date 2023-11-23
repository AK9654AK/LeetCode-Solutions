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
    int countNodes(TreeNode* root) {
     if(root==NULL)return 0;
        
        int lt=checkl(root,0);
        int rt=checkl(root,1);
        
        if(lt==rt)return (1<<rt)-1;
        return 1+countNodes(root->left)+countNodes(root->right);
        
    }
    
    
    int checkl(TreeNode* root,int k){
        int ans=0;
        while(root){
            ans++;
            if(k==0)root=root->left;
            if(k==1)root=root->right;
        }
        return ans;
    }
    

    
    
};