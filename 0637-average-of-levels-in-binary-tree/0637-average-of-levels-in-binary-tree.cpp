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
    vector<double> averageOfLevels(TreeNode* root) {
        
        vector<double>ans;
        
        queue<TreeNode *> q;
        q.push(root);
        
    
        int i=0;
        
        // ans.push_back(check);
        if(root==NULL)return ans;
        
        while(!q.empty()){
            i++;
             double check=0.0;
            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode *node=q.front();
                q.pop();
                
               
                
                // check=0.0;
                bool l=0;bool r=0;
                if(node->left){
                    q.push(node->left);
                    // check+=node->left->val;
                    l=1;
                }
                if(node->right){
                    q.push(node->right);
                    // check+=node->right->val;
                    r=1;
                }
                
                check+=node->val;
                

                    
                // if(l==1 and r==1)ans.push_back(check/2);
                // else if((l==1 and r==0) || (l==0 and r==1))ans.push_back(check);
                
                
            }
             ans.push_back(check/size);
        }
        
        return ans;
    }
};