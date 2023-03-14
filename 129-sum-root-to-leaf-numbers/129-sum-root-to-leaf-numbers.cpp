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
    void solve(TreeNode* root, string num,int& sum){
        if(root==NULL) return;
        if(root->left==NULL && root->right==NULL){
            num+=to_string(root->val);
            sum+=stoi(num);
        }
        solve(root->left,num+to_string(root->val),sum);
        solve(root->right,num+to_string(root->val),sum);
    }
    int sumNumbers(TreeNode* root) {
        string num="";
        int sum=0;
        solve(root,num,sum);
        return sum;
    }
};