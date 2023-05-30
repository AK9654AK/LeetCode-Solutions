class Solution {
public:
    vector<int>temp;
    vector<int>ori;
    Solution(vector<int>& nums){
        ori=nums;
        temp=nums;
    }
    
    vector<int> reset() {
        return ori;
    }
    
    vector<int> shuffle() {
       int n=temp.size();
       int ind=rand()%n;
       int pind=rand()%n;
       
       swap(temp[ind],temp[pind]);
        return temp;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */