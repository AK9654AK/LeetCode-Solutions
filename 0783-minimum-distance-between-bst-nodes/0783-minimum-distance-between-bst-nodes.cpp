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
    
        
        vector<int> nums;
    
    int minDiffInBST(TreeNode* root) 
    {
        
        if(root==nullptr)return -1;        
        minDiffInBST(root->left);
        nums.push_back(root->val);
        minDiffInBST(root->right); 
        int minSize=INT_MAX;
        for(int i=0;i<nums.size()-1;i++){
            int curSize = abs((nums.at(i)-nums.at(i+1)));
            if(curSize<minSize)minSize=curSize;
        }
       
        return minSize;
    }
        
        
    
};