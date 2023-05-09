class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr){
        vector<int>mp(3000);
        
        
        for(auto x:arr){
            if(x<0)mp[-x]++;
            else if(x>0)mp[1000+x]++;
        }
        
        sort(mp.begin(),mp.end());
        for(int i=0;i<mp.size()-1;i++){
            if(mp[i]==0|| mp[i+1]==0)continue;
            if(!(mp[i+1]>mp[i]))return false;
        }
        
        return true;
    }
};