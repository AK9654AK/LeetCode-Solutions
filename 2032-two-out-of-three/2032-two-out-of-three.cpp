class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
      
        vector<int>vec;
        int hash[101]={0};
        
        sort(nums1.begin(),nums1.end() );
nums1.erase( unique( nums1.begin(), nums1.end() ), nums1.end() );
        sort(nums2.begin(),nums2.end() );
nums2.erase( unique( nums2.begin(), nums2.end() ), nums2.end() );
        sort(nums3.begin(),nums3.end() );
nums3.erase( unique( nums3.begin(), nums3.end() ), nums3.end() );
        
        for(auto x:nums1){
            hash[x]++;
        }
         for(auto x:nums2){
            hash[x]++;
        }
         for(auto x:nums3){
            hash[x]++;
        }
        
        
        for(int i=0;i<101;i++){
            if(hash[i]>=2)vec.push_back(i);
        }
        
        
        return vec;
    }
};