class Solution {
public:
    int p=0;
    vector<int> findArray(vector<int>& pref) {
        
        vector<int>arr(pref.size());
        
        for(int i=0;i<pref.size();i++){
           arr[i]=pref[i]^p;
            p^=arr[i];
        }
        
        return arr;
    }
};