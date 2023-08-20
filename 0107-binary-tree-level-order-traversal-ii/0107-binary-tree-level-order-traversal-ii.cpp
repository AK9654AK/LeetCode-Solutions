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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        
         vector<vector<int>> res;
        if(root==NULL)return res;
        queue<TreeNode *>q;
        q.push(root);
        
        while(!q.empty()){
            vector<int>ans;
            int size=q.size();
            
            for(int i=0;i<size;i++){
                TreeNode *node=q.front();
                q.pop();
                // for(auto it:)
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);
                ans.push_back(node->val); 
            }
            
            res.push_back(ans);
        }
        
        
        reverse(res.begin(),res.end());
        
        
        return res;

    }
};