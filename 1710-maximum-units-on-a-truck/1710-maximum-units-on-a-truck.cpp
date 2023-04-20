class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        
        map<int,int>mp;
        
        int ans=0;
        for(auto x: boxTypes)mp[x[1]]+=x[0];
        
        
        for(auto it=mp.rbegin(); it!=mp.rend() and truckSize>=0;it++){
            ans+=min(truckSize,it->second) * it->first;     ////it->first has the number of units in a box
            truckSize-=it->second;  //it ->second has the no of boxes 
        }
        
        return ans;
    }
};