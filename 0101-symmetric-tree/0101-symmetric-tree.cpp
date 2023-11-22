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
    
    
    bool check(TreeNode* p, TreeNode* q){
        if(p==NULL or q==NULL)return p==q;
        if(p->val==q->val and check(p->left, q->right) and check(p->right,q->left))return true;
        else return false;
    }
    
    
    
    
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)return true;
        return check(root->left, root->right);
    }
};