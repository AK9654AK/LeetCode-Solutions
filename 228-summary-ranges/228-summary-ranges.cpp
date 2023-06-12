class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> output;
        int idx = 0;
        while(idx < nums.size()) {
            int beg, last;
            beg = nums[idx];
            while(idx+1 < nums.size() && nums[idx+1] == nums[idx] + 1)
                idx++;
            last = nums[idx];
            if(beg == last)
                output.push_back(to_string(beg));
            else
                output.push_back(to_string(beg) + "->" + to_string(last));
            idx++;
        }
        return output;     
    }
};