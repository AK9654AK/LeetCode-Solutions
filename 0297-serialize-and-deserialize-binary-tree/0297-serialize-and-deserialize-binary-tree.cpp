/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    


     string serialize(TreeNode* root) {
        // if(root==NULL)return "";
        // queue<TreeNode*>q;
        // string s="";
        // q.push(root);
        // while(!q.empty()){
        //     TreeNode* node=q.front();
        //     q.pop();
        //     if(node==NULL)s.append("X,");
        //     else s.append(to_string(node->val)+',');
        //     if(node!=NULL){
        //         q.push(node->left);
        //         q.push(node->right);
        //     }
        // }
          // return s;
         
         
         
         if(!root) return "X";
        return to_string(root->val) + "," + serialize(root->left)+ serialize(root->right);
       
    }

    TreeNode* deserialize(string data) {
        
        queue<string> q;
        string s = "";
        
        for(auto i : data) {
            
            if(i == ',') {
                q.push(s); s = "";
            }else if(i == 'X') {
                q.push("X");
            }else s += i;
        }
        return makeTree(q);
    }
    
    TreeNode* makeTree(queue<string> & q) {
        
        string s = q.front(); q.pop();
        if(s == "X") return NULL;
        
        TreeNode* root = new TreeNode(stoi(s));
        root->left = makeTree(q);
        root->right = makeTree(q);
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));