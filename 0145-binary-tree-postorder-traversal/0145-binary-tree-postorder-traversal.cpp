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
     
    vector<int> postorderTraversal(TreeNode* root) {
         vector<int>ans;
        if(root==NULL)return ans;
        stack<TreeNode*>st;
        st.push(root);
        
        while(!st.empty()){
            
            TreeNode* temp=st.top();
            st.pop();
            
            if(temp->right==NULL and temp->left==NULL){
               ans.push_back(temp->val);
               continue;}
            st.push(temp);
            if(temp->right){
                st.push(temp->right);
                temp->right=NULL;
            }
            if(temp->left){
                st.push(temp->left);
                temp->left=NULL;
            }
        }
        return ans;
    }
};