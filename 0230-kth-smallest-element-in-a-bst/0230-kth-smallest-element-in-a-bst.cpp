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
    
    int ans=0;
    int count=0;
    int kthSmallest(TreeNode* root, int k) {
        
        if(root==NULL)return 0;
        
        kthSmallest(root->left,k);
        {
            count=count+1;
            if(count==k)ans=root->val;
            
        }
        kthSmallest(root->right,k);
        
        return ans;
    }
};