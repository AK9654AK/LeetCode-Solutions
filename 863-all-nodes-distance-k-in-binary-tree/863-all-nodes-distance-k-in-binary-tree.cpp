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
  void dfs(TreeNode*root,vector<int>adj[]){
        if(root==NULL){return;}
        if(root->left){
            adj[root->val].push_back(root->left->val);
            adj[root->left->val].push_back(root->val);
            dfs(root->left,adj);
        }
        if(root->right){
            adj[root->val].push_back(root->right->val);
            adj[root->right->val].push_back(root->val);
            dfs(root->right,adj);
        }
    }
    void cal(int val,int k,vector<int>adj[],vector<int>&ans,int par){
        if(k==0){
            ans.push_back(val);
            return;
        }
        for(auto it:adj[val]){
            if(it!=par){
                cal(it,k-1,adj,ans,val);
            }
        }
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        //Generate a graph from the tree
        vector<int>adj[500];
        dfs(root,adj);
        vector<int>ans;
        //calulate the ans array
        cal(target->val,k,adj,ans,-1);
        return ans;
    }
};