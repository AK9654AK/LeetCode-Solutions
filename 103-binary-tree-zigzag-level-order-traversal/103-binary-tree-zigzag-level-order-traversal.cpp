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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
    	if(root==NULL){
    	    return ans;
    	}
    	queue<TreeNode*> q;
    	q.push(root);
    	q.push(NULL);
    	int level=1;
    	while(!q.empty()){
    	     TreeNode* temp;
    	     vector<int> v;
    	    while(q.front()!=NULL){
            	    temp=q.front();
            	    v.push_back(temp->val);
            	    q.pop();
            	    if(q.front()==NULL) level++;
            	    if(temp->left!=NULL) q.push(temp->left); 
            	    if(temp->right!=NULL) q.push(temp->right);
        	    }
        	    
        	    if(level%2!=0){
            	   reverse(v.begin(),v.end());
            	  }
            	  
//             	for(auto i:v){
//         	      ans.push_back(i);
//         	    }
            ans.push_back(v);
        	    
    	    q.pop();
    	    q.push(NULL);
    	    if(q.front()==NULL) break;
    	}
    	return ans;
    }
};