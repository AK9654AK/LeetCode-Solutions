/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    vector<Node*>lvl;

    void DFS(Node* root, int l){

        if(!root){
            return;
        }

        if(lvl.size() == l){
            lvl.push_back(root);
        }
        else{
            lvl[l]->next = root;
            lvl[l] = root;
        }

        DFS(root->left,l+1);
        DFS(root->right,l+1);

        return;
    }

    Node* connect(Node* root) {
        if(!root){
            return root;
        }
        DFS(root, 0);
        return root;
    }
};