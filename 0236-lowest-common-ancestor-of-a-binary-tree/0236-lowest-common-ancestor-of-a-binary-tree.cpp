/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
    
    
    bool check(TreeNode* root,TreeNode* p,vector<TreeNode*>&v){
        if(root==NULL) return false;
        
        v.push_back(root);
        if(root==p)return true;
        if(check(root->left,p,v))return true;
        if(check(root->right,p,v))return true;
        
        v.pop_back();
        return false;
    }
    
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        if(root==NULL)return NULL;
        
        vector<TreeNode*>pv;
        vector<TreeNode*>qv;
        check(root,p,pv);
        check(root,q,qv);
        
        TreeNode* ans=NULL;
        for(int i=0;i<qv.size() and i<pv.size();i++){
            if(qv[i]==pv[i]){
                ans=qv[i];
            }else break;
        }
        
        return ans;
        
        
    }
};