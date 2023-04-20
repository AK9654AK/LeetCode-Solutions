class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
    
        
        vector<vector<int>> abhi;
        map<int,int>mp;
          ///Dont use unordered map as it dont store the value of key without sorting.
        for(auto x:items1)mp[x[0]]+=x[1];
          for(auto x:items2)mp[x[0]]+=x[1];
        
        // sort(mp.begin(),mp.end());
        
        for(auto x:mp)abhi.push_back({x.first,x.second});
        // sort(abhi.first(),abhi.second());
            
        return abhi;
        
        
        
    }
};