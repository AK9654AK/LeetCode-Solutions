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
    
    
    
    void check(TreeNode* r,int t,vector<vector<int>>&abhi,vector<int>ans){
        
        
        if(r==NULL)return;
        int rsum=0;
        rsum+=r->val;
            ans.push_back(r->val);
        
        if(!r->left and !r->right and rsum==t){abhi.push_back(ans);
                                                    }
        
        check(r->left,t-r->val,abhi,ans);
        check(r->right,t-r->val,abhi,ans);
        
        
        
    }
    
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        
        
        vector<vector<int>> abhi;
        vector<int>ans;
        
        check(root,targetSum,abhi,ans);
        
        return abhi;
        
    }
};