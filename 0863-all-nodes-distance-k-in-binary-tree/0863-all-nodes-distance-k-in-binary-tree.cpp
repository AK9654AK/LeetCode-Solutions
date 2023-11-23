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
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        vector<int>ans;
        if(root==NULL)return ans;
        queue<TreeNode*>q;
        unordered_map<int,TreeNode*>mp;
        
        q.push(root);
        
        while(!q.empty()){
            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode* temp=q.front();
                q.pop();
                if(temp->left){
                    mp[temp->left->val]=temp;
                    q.push(temp->left);
                }
                if(temp->right){
                    mp[temp->right->val]=temp;
                    q.push(temp->right);
                }
            }
        }
        
        unordered_map<int,int>vis;
        q.push(target);
        
        while(!q.empty() and k--){
            
            
            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode* temp=q.front();
                q.pop();
                vis[temp->val]=1;
                if(temp->left and !vis[temp->left->val]){
                    q.push(temp->left);
                }
                if(temp->right and !vis[temp->right->val]){
                    q.push(temp->right);
                }
                if (temp->val and mp[temp->val]  && !vis[mp[temp->val]->val]){q.push(mp[temp->val]);
                    }
            }
            
            
            
            
        }
        
      while(!q.empty()){
          ans.push_back(q.front()->val);
          q.pop();
      }
        
        return ans;
        
        
        
    }
};