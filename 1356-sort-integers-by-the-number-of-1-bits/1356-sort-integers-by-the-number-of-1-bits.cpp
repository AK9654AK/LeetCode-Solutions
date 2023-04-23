class Solution {
public:
    
    int check(int n){
        int ans=0;
        while(n){
            ans++;
            n=n&(n-1);
        }
        return ans;
    }
    
    
    
    vector<int> sortByBits(vector<int>& arr) {
        
        // unordered_map<int,int>mp;
        vector<pair<int,int>>mp;
        
        for(int i=0;i<arr.size();i++){
            // mp[arr[i]]=check(arr[i]);
            mp.push_back({check(arr[i]),arr[i]});
        }
        
        sort(mp.begin(),mp.end());
        
        arr.clear();
        
        // for(auto it=mp.begin();it!=mp.end();it++){
        for(int i=0;i<mp.size();i++){
            arr.push_back(mp[i].second);
        }
        
        return arr;
    }
};