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
     int maxLevelSum(TreeNode* root) {
        int levelSum=0;
        int maxlevelSum = INT_MIN;
        int level=0;
        int ans;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        while(!q.empty())
        {
            auto node = q.front();
            q.pop();
            if(node==nullptr)
            {
                if(!q.empty())
                    q.push(NULL);
                level++;
                if(levelSum>maxlevelSum)
                {
                    maxlevelSum = levelSum;
                    ans = level;
                }
                levelSum=0;
            }
            else
            {
                int val = node->val;           
                levelSum += val;
        
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
        }
        return ans;
    }
};