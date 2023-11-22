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
    
    void check(TreeNode* root,vector<string>&v,string s){
        
        if(root==NULL)return;
        
        if(root->left==NULL and root->right==NULL){
            s+=to_string(root->val);
            v.push_back(s);
            return;
            
            
        }
        
            s+=to_string(root->val);
            s+="->";
            
    
        
        check(root->left,v,s);
        check(root->right,v,s);
        
        
        
    }
    
    
    
    vector<string> binaryTreePaths(TreeNode* root) {
        string s;
        vector<string>v;
        if(root==NULL)return v;
        check(root,v,s);
        return v;
    }
};