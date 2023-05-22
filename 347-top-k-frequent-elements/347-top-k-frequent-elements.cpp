class Solution {
public:
    static bool cmp(pair<int,int>a,pair<int,int>b){
        return a.second>b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(auto x:nums)mp[x]++;
        vector<pair<int,int>>v(mp.begin(),mp.end());
        sort(v.begin(),v.end(),cmp);
        nums.clear();
        int i=0;
        for(auto it=v.begin();it!=v.end(),i<k;it++,i++){
            nums.push_back(it->first);
        }
        return nums;
    }
};