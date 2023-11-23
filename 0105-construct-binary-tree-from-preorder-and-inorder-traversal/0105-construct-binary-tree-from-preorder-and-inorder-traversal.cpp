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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int,int>mp;
        for(int i=0;i<inorder.size();i++)mp[inorder[i]]=i;
        TreeNode* ans=check(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,mp);
        return ans;
    }
    
    
    TreeNode* check(vector<int> &preorder,int ps,int pe,vector<int>& inorder,int is,int ie,unordered_map<int,int>&mp){
        
        if(ps>pe or is>ie)return NULL;
        TreeNode* root=new TreeNode(preorder[ps]);
        
        int inroot=mp[root->val];
        int leftele=inroot-is;
        
        
        root->left=check(preorder,ps+1,ps+leftele,inorder,is,inroot-1,mp);
        root->right=check(preorder,ps+leftele+1,pe,inorder,inroot+1,ie,mp);
        
        return root;
        
        
        
    }
    
    
    
    
    
};