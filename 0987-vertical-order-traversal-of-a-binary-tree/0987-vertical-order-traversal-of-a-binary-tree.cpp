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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
    vector<vector<int>> v;
    if (root == NULL) return v;

    map<int, vector<int>> mp;
    queue<pair<TreeNode*, int>> q;
    q.push({root, 0});

    while (!q.empty()) {
        int size = q.size();
        map<int, multiset<int>> level; // Using set to automatically sort values within the same horizontal distance
        for (int i = 0; i < size; i++) {
            TreeNode* temp = q.front().first;
            int hori = q.front().second;
            q.pop();

            level[hori].insert(temp->val);

            if (temp->left) q.push({temp->left, hori - 1});
            if (temp->right) q.push({temp->right, hori + 1});
        }

        // Extract values from the set and push them into the result vector
        for (auto &[hori, values] : level) {
            mp[hori].insert(mp[hori].end(), values.begin(), values.end());
        }
    }

    for (auto &[key, val] : mp) {
        v.push_back(val);
    }

    return v;
}

};