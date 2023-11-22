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
    int widthOfBinaryTree(TreeNode* root) {
         long long int ans=0;
   if(root==NULL)return 0;

   queue<pair<TreeNode*,int>>q;
   q.push({root,0});
   

   while(!q.empty()){
       long long int left=q.front().second;
       long long int right=q.back().second;

       long long int size=q.size();

       for(int i=0;i<size;i++){
         TreeNode* temp=q.front().first;
         long long int k=q.front().second-left;

         q.pop();

         if(temp->left)q.push({temp->left,2*k+1});
         if(temp->right)q.push({temp->right,2*k+2});

       }
        ans=max(ans,right-left+1);
   }
return ans;
}
};