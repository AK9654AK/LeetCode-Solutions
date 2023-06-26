/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
          vector<vector<int>>res;
        queue<Node *>q;
        if(root==NULL)return res;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            vector<int>ans;
            for(int i=0;i<n;i++){
                Node *nod=q.front();
                q.pop();
                for(auto it:nod->children)q.push(it);
                ans.push_back(nod->val);
            }
        
            res.push_back(ans);
            
        }
        
        return res;
    }
};