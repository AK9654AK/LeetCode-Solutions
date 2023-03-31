class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        
        
        vector<vector<int>> ans;
        
        int hash[1001]={-0};
        
        for(int i=0;i<nums1.size();i++){
            hash[nums1[i][0]]+=nums1[i][1];
        }
        for(int i=0;i<nums2.size();i++){
           hash[nums2[i][0]]+=nums2[i][1];
        }
        
        for(int i=0;i<1001;i++){
            if(hash[i]==0)continue;
            else{
                vector<int>temp={i,hash[i]};
                ans.push_back(temp);
            }
        }
        return ans;
    }
};