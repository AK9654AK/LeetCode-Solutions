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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* temp=root;
        
        if(root==NULL){
            TreeNode* newNode= new TreeNode(val);
            return newNode;
        }
        
        while(true){
            if(temp->val<=val){
                
                if(temp->right==NULL){
                    TreeNode* newNode=new TreeNode(val);
                    temp->right=newNode;
                    break;
                }
                temp=temp->right;
            }
            else if(temp->val>val){
                
                if(temp->left==NULL){
                    TreeNode* newNode=new TreeNode(val);
                    temp->left=newNode;
                    break;
                }
                temp=temp->left;
            }
        }

        
        return root;
    }
};