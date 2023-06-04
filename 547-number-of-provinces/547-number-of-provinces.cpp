class Solution {
public:
    void dfs(vector<vector<int>> &isConnected,vector<bool>& visited,int nodes,int curr){
    visited[curr]=true;
    for(int i=0;i<nodes;i++){
        if(isConnected[curr][i]&& !visited[i]){
            dfs(isConnected,visited,nodes,i);
        }
    }

}
    int findCircleNum(vector<vector<int>>& isConnected) {

        int nodes=isConnected.size();
        int ans=0;
        vector<bool> visited(nodes);
        for(int i=0;i<nodes;i++){
            if(!visited[i]){
                dfs(isConnected,visited,nodes,i);
                ans++;
            }
        }
        return ans;
    }
};