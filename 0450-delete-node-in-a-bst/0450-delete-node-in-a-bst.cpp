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
    
    TreeNode* deleter(TreeNode* root){
        if(root->left==NULL)return root->right;
        if(root->right==NULL)return root->left;
        
        
        TreeNode* rightChild=root->right;
        TreeNode* leftrightlastchild=findlast(root->left);
        leftrightlastchild->right=rightChild;
        return root->left;
    }
    
    
    TreeNode* findlast(TreeNode* root){
     if(root==NULL)return NULL;
     while(root->right!=NULL)root=root->right;
     return root;
    }
    
    
    
    TreeNode* deleteNode(TreeNode* root, int key) {
        TreeNode* dummy=root;
        
        
        if(root==NULL)return NULL;
        if(root->val==key)return deleter(root);
        
        
        
        TreeNode*temp=root;
      while(root){
      if(root->val>key){
          if(root->left!=NULL && root->left->val==key){
              root->left=deleter(root->left);
              break;

          }
          else root=root->left;

      }
      else if(root->val<=key){
          if(root->right!=NULL && root->right->val==key){
              root->right=deleter(root->right);
              break;
          }
          else root=root->right;
      }
    }
    return temp;
    }
};