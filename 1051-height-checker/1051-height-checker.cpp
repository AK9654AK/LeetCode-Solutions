class Solution {
public:
    int heightChecker(vector<int>& heights) {
        
        vector<int>expect(heights);
        
        sort(expect.begin(),expect.end());
        
        int i=0;int j=0;
        int count=0;
        while(i<heights.size()){
            if(expect[i++]!=heights[j++])count++;
        }
        return count;
    }
};