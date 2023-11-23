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
    int amountOfTime(TreeNode* root, int start) {
        if (!root || (!root->left && !root->right)) return 0;

        unordered_map<TreeNode*, TreeNode*> parent;
        unordered_map<TreeNode*, bool> visited;

        // Parent mapping
        TreeNode* target = NULL;
        queue<TreeNode*> q;
        q.push(root), parent[root] = NULL;
        while (!q.empty()) {
            TreeNode* current = q.front();
            q.pop();

            if (current->val == start) target = current;
            if (current->left) {
                q.push(current->left);
                parent[current->left] = current;
            }
            if (current->right) {
                q.push(current->right);
                parent[current->right] = current;
            }
        }

        // Solve
        int time = 0;
        q.push(target);
        visited[target] = true;

        while (!q.empty()) {
            int n = q.size();
            bool flag = false;
            for (int i = 0; i < n; i++) {
                TreeNode* current = q.front();
                q.pop();

                if (current->left && !visited[current->left]) {
                    flag = true;
                    q.push(current->left);
                    visited[current->left] = true;
                }
                if (current->right && !visited[current->right]) {
                    flag = true;
                    q.push(current->right);
                    visited[current->right] = true;
                }
                if (parent[current] && !visited[parent[current]]) {
                    flag = true;
                    q.push(parent[current]);
                    visited[parent[current]] = true;
                }
            }
            if (flag) time++;
        }

        return time;
    }
};