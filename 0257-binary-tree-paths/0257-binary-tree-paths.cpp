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
    
    void check(TreeNode *r,vector<string>&abhi,string s){
        
        if(r==NULL)return;
       
        
        if(r->left==NULL and r->right==NULL){
            s+=to_string(r->val);
            abhi.push_back(s);
            return;
            
        }
       
        
         s+=to_string(r->val);
        s+="->";
       check(r->left,abhi,s);
       check(r->right,abhi,s);
        
       
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        
        vector<string>abhi;
        
        if(root ==NULL)return abhi;
        string s;
        
        
        check(root,abhi,s);
        
        return abhi;
        
        
        
    }
};