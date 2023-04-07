class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        
        vector<vector<int>> abhi;  
        ////Only working for +ve items in both array and hence use sets.
//     int hash1[2001] = {0};
//     int hash2[2001] = {0};
        
        unordered_set<int>hash1;
        unordered_set<int>hash2;
    for(auto i : nums1) {
        hash1.insert(i);
    }
    for(auto i : nums2) {
        hash2.insert(i);
    }

        vector<int>temp;
//     int a1 = 0;
//     int a2 = 0;
    for(auto i:hash1) {
        if(hash2.find(i)==hash2.end()) {
            temp.push_back(i);
        }
    }
        abhi.push_back(temp);
        temp.clear();
        
        for(auto i:hash2) {
        if(hash1.find(i)==hash1.end()) {
            temp.push_back(i);
        }
    }
      
        abhi.push_back(temp);
        return abhi;
}
};