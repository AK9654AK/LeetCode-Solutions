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
       if(!root){
            return {};
        }
        vector<int> ans;
        stack<TreeNode*> s;
        s.push(root);
        
        while(!s.empty()){
            TreeNode* temp = s.top();
            s.pop();
            if(!temp->left and !temp->right){
                ans.push_back(temp->val);
                continue;
            }
            if(temp->right){
                s.push(temp->right);
                temp->right = NULL;
            }
            s.push(temp);
            if(temp->left){
                s.push(temp->left);
                temp->left = NULL;
            }
        }
        return ans;
    }
};
