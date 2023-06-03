class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>mp;
        for(auto x:arr)mp[x]++;
        string ans="";
        
        // for(auto [key,value]:mp){
        //     if(value==1){ans=key;     ///Sorting auto matically according to the alphab order
        //                 k--;
        //                 if(k==0)return ans;}
        // }
       
        
        for(auto x:arr){
            if(mp[x]==1){
                ans=x;
                k--;
                
            }
            if(k==0)return ans;
        }
        
        return "";
    }
};