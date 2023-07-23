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
    vector<TreeNode*> allPossibleFBT(int n) 
    {
        if(n%2 == 0)
        {
            return {};
        }
        else if(n == 1)
        {
            return {new TreeNode(0)};
        }
        else
        {
            vector<TreeNode*> arr;
            for(int i = 1; i < n; i++)
            {
                vector<TreeNode*> l_tree = allPossibleFBT(i);
                vector<TreeNode*> r_tree = allPossibleFBT(n-i-1);
                for(auto x : l_tree)
                {
                    for(auto y : r_tree)
                    {
                        TreeNode* root = new TreeNode(0);
                        root->left = x;
                        root->right = y;
                        arr.push_back(root);
                    }
                }
            }
            return arr;
        }
    }
};