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
    int ans = 0;
    if (root == NULL) return ans;
    TreeNode* target = NULL;
    queue<TreeNode*> q;
    unordered_map<TreeNode*, TreeNode*> mp;

    q.push(root);
    // mp[root]=NULL;
    while (!q.empty()) {
        int size = q.size();

        for (int i = 0; i < size; i++) {
            TreeNode* temp = q.front();
            q.pop();
            if (temp->val == start) target = temp;
            if (temp->left) {
                mp[temp->left] = temp;
                q.push(temp->left);
            }
            if (temp->right) {
                mp[temp->right] = temp;
                q.push(temp->right);
            }
        }
    }

    unordered_map<TreeNode*, bool> visited;
    q.push(target);
        visited[target]=true;

    while (!q.empty()) {
        int size = q.size();
        bool flag = false;
        for (int i = 0; i < size; i++) {
            TreeNode* temp = q.front();
            q.pop();

            if (temp->left and !visited[temp->left]) {
                q.push(temp->left);
                flag = true;
                visited[temp->left] = true;
            }
            if (temp->right and !visited[temp->right]) {
                q.push(temp->right);
                flag = true;
                visited[temp->right] = true;
            }
            if (mp[temp] and !visited[mp[temp]]) {
                q.push(mp[temp]);
                flag = true;
                visited[mp[temp]] = true;
            }
        }
        if (flag) ans++;
    }

    return ans;
}
};