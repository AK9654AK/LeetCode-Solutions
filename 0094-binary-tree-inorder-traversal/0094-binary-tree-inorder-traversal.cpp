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
   vector<int> inorderTraversal(TreeNode* root) {
       
       vector<int>ans;
       
       stack<TreeNode*>s;
       s.push(root);
       if(root==NULL)return ans;
       
       while(!s.empty()){
           TreeNode *node=s.top();
           s.pop();
           
           if(!node->left and !node->right){
               ans.push_back(node->val);
               continue;
           }
           if(node->right){
               s.push(node->right);
               node->right=NULL;
           }
           
           s.push(node);
           if(node->left){
               s.push(node->left);
               node->left=NULL;
           }
       }
       
       return ans;
    }
};