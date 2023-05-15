class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        unordered_map<int,int>mp;
        for(auto x:rectangles){
            int ele=*min_element(x.begin(),x.end());
            mp[ele]++;
        }
        int maxi=INT_MIN;
        for(auto [key,value]:mp){
            if(key>maxi)maxi=key;
        }
        int res=0;
        for(auto [key,value]:mp){
            if(key>=maxi)res+=value;
        }
        return res;
    }
};