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
    vector<vector<int>>levelOrder(TreeNode* root){
        
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        if(root==NULL)return ans;
        q.push(root);
        
        while(!q.empty()){
            long long int size=q.size();
            vector<int>res;
            for(int i=0;i<size;i++){
                TreeNode *tr=q.front();
                q.pop();
                if(tr->left)q.push(tr->left);
                if(tr->right)q.push(tr->right);
                res.push_back(tr->val);
            }
            
            ans.push_back(res);  
            
            
        }
        
        
        
    
        
        
        return ans;
        
        
        
        
        
        // vector<vector<int>>res;
        // queue<TreeNode*>q;
        // q.push(root);
        // if(root==NULL)return res;
        // while(!q.empty()){
        //     vector<int>ans;
        //     int size=q.size();
        //     for(int i=0;i<size;i++){
        //         TreeNode *node=q.front();
        //         q.pop();
        //         if(node->left)q.push(node->left);
        //         if(node->right)q.push(node->right);
        //         ans.push_back(node->val);
        //     }
        //     res.push_back(ans); 
        // }
        // return res;
    }
};