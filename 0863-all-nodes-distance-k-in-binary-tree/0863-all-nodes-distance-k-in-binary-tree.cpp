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
        if(root==NULL)return {};
        queue<TreeNode*>q;
        unordered_map<int,TreeNode*>mp;
        q.push(root);
        vector<int>ans;
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
        
        
        unordered_map<int,int>visited;
        q.push(target);
        
        while(k-- and !q.empty()){
            int size=q.size();
            
            for(int i=0;i<size;i++){
                TreeNode* temp=q.front();
                q.pop();
                visited[temp->val]=1;
                
                if(temp->left and !visited[temp->left->val]){
                    q.push(temp->left);
                } 
                if(temp->right and !visited[temp->right->val]){
                    q.push(temp->right);
                }
                
                if(mp[temp->val] and !visited[mp[temp->val]->val]){
                    q.push(mp[temp->val]);
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