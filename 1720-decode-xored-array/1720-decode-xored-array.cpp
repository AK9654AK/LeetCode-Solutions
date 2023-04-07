class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> abhi;
        abhi.push_back(first);
        for(int i=0;i<encoded.size();i++){
            first=first^encoded[i];
            abhi.push_back(first);
        }
        
        return abhi;
        
    }
};