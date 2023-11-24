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
    
    
    TreeNode* check(vector<int>& postorder,int ps,int pe,vector<int>& inorder,int is,int ie,map<int,int>&mp){

   if(ps>pe or is>ie)return NULL;

   TreeNode* root=new TreeNode(postorder[pe]);
   int inroot=mp[postorder[pe]];
   int eleleft=inroot-is;

   root->left=check(postorder,ps,ps+eleleft-1,inorder,is,inroot-1,mp);
   root->right=check(postorder,ps+eleleft,pe-1,inorder,inroot+1,ie,mp);

   return root;


}
    
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
       map<int,int>mp;
     for(int i=0;i<inorder.size();i++)mp[inorder[i]]=i;

     TreeNode* ans=check(postorder,0,postorder.size()-1,inorder,0,inorder.size()-1,mp);
     return ans;
    }
};