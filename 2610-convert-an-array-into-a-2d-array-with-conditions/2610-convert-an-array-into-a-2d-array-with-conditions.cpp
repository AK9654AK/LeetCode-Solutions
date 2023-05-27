class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>>abhi;
        unordered_map<int,int>mp;
        int size=0;
        for(auto x: nums)mp[x]++;
        // size=*max_element(mp.second());
        for(auto [key,value]:mp)if(value>size)size=value;
        abhi.resize(size);
        for(auto i:mp)for(int j=0;j<i.second;j++)abhi[j].push_back(i.first);
        return abhi;
    }
};