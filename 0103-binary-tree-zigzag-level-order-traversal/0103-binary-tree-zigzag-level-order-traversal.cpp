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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> rst;
        traverse(root, 0, rst);
        return rst;
    }
    
void traverse(TreeNode* root, int depth, vector<vector<int>> & rst) {
    if (!root)
        return;
    if (rst.size() == depth) {
        vector<int> temp;
        rst.push_back(temp);
    }
    if (depth % 2 == 0)   
        rst[depth].push_back(root ->val);
    else{
        rst[depth].insert(rst[depth].begin(), root -> val);   
    }
    traverse(root -> left, depth + 1, rst);  
    traverse(root -> right, depth  +1, rst);
}
};