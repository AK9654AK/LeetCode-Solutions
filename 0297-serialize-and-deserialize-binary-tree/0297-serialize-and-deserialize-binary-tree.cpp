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

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(root==NULL)return "X";
        string l=serialize(root->left);
        string r=serialize(root->right);
        
        return to_string(root->val)+','+l+r;
    }

    
    TreeNode* makeTree(queue<string>&q){
        
        
        string s=q.front();
        q.pop();
        if(s=="X")return NULL;
        TreeNode* root=new TreeNode(stoi(s));
        
        
        root->left=makeTree(q);
        root->right=makeTree(q);
        
        return root;
    }
   
    
    TreeNode* deserialize(string data) {
        queue<string>q;
        
        string s="";
        
        for(int i=0;i<data.size();i++){
            if(data[i]=='X')q.push("X");
              else if(data[i]==','){
                  q.push(s);
                  s="";
              }
            else{
                s+=data[i];
            }
        }
        
        TreeNode* ans=makeTree(q);
        return ans;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));