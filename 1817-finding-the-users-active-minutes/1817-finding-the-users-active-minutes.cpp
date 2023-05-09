class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        vector<int>v(k);
        unordered_map<long long int, unordered_set<int>>mp;
        for(auto x:logs){
                 mp[x[0]].insert(x[1]);
            }

        for(auto [key,value]:mp){
            
            v[(value.size()-1)]++;
        }
        return v;
        
        
        
    }
};