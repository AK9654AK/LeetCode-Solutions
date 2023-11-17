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
class BSTIterator {
public:
    stack<TreeNode*>st;
    BSTIterator(TreeNode* root) {
             
      pusher(root);
    }
    
    int next(){
        
        TreeNode* it=st.top();
        st.pop();
        pusher(it->right);
        return it->val;
        
        
        
    }
    
    void pusher(TreeNode* root){
        while(root){
            st.push(root);
            root=root->left;
        }
    }
    
    
    bool hasNext() {
        if(st.size()==0)return false;
        else return true;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */