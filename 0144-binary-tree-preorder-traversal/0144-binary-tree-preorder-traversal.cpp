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
    
    vector<int> abhi;        // Declaring the vector array in the , We dont need to declare again again.
    vector<int> preorderTraversal(TreeNode* root) {
        
        
        
        if(root){
            abhi.push_back(root->val);
            preorderTraversal(root->left);
            preorderTraversal(root->right);
        }
        return abhi;
    
        
    }
};