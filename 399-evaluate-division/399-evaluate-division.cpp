class Solution {
public:
   bool solve(string s, string e, double &prod, unordered_map<string, vector<pair<string, double>>> &g, unordered_map<string, bool> &vis) {
        
        if(s == e) {
            return true;
        }
        
        vis[s] = 1;
        
        for(auto it: g[s]) {
            if(!vis[it.first]) {
                prod *= it.second;
                if(solve(it.first, e, prod, g, vis)) {
                    return true;
                }
                prod /= it.second;
            }
        }
        return false;
    }
    
public:
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        
        unordered_map<string, vector<pair<string, double>>> g;
        
        for(int i = 0; i < equations.size(); i++) {
            g[equations[i][0]].push_back({equations[i][1], values[i]});
            g[equations[i][1]].push_back({equations[i][0], 1.0/values[i]});
        }
        
        vector<double> ans;
        
        for(auto it: queries) {
            unordered_map<string, bool> vis;
            double prod = 1.0;
            
            if(g.find(it[0]) == g.end() || g.find(it[1]) == g.end() || !solve(it[0], it[1], prod, g, vis)) {
                ans.push_back(-1.0);
            }
            else {
                ans.push_back(prod);
            } 
        }
        return ans;
    }
};