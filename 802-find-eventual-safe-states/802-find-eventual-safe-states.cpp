class Solution {
public:
     vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<int> terminalNodes;
        vector<int> safeNodes;

        int n=graph.size();
        vector<int> outdegree(n,0);

        for(int i=0;i<n;i++){
            outdegree[i]=graph[i].size();
            cout << outdegree[i] << " ";
        }
        cout << endl;

        vector<vector<int>> indegreeGraph(n);

        for(int i=0;i<n;i++){
            for(int j=0;j<graph[i].size();j++){
                int strt = i;
                int dest = graph[i][j];
                indegreeGraph[dest].push_back(strt);
            }
        }

        queue<int> q;

        cout << "Terminal Nodes" << endl;
        for(int i=0;i<n;i++){
            if(outdegree[i]==0){
                safeNodes.push_back(i);
                q.push(i);
                cout << i << " ";
            }
        }
        cout << endl;

        while(!q.empty()){
            int x = q.front();
            q.pop();
            cout << x << endl;
            for(int i=0;i<indegreeGraph[x].size();i++){
                int idx = indegreeGraph[x][i];
                --outdegree[idx];
                if(outdegree[idx]==0){
                    q.push(idx);
                    safeNodes.push_back(idx);
                }
            }
        }

        sort(safeNodes.begin(), safeNodes.end());

        return safeNodes;



    }
};