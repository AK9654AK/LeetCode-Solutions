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
        unordered_map<int,vector<int>> m;
        unordered_map<int,int> vis;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())//adding neighbours
        {
            TreeNode* t=q.front();
            q.pop();
            if(t->left)
            {
                m[t->val].push_back(t->left->val);
                m[t->left->val].push_back(t->val);
                q.push(t->left);
            }
            if(t->right)
            {
                m[t->val].push_back(t->right->val);
                m[t->right->val].push_back(t->val);
                q.push(t->right);
            }
        }
        queue<pair<int,int>> pq;
        pq.push({start,0});
        int res=0;
        vis[start]=1;
        while(!pq.empty())
        {
            int node=pq.front().first;
            int dist=pq.front().second;
            pq.pop();
            
            for(auto x:m[node])
            {
                if(vis[x]==0)
                {
                    vis[x]=1;
                    pq.push({x,dist+1});
                }
            }
            res=max(res,dist);
        }
        return res;
    }
};