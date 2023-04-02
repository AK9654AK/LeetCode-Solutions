class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n=candyType.size();
        sort(candyType.begin(),candyType.end());
        int types=1;
        for(int i=0;i<candyType.size()-1;i++)if(candyType[i]!=candyType[i+1])types++;
        
        if(types==n/2)return n/2;
        if(types<n/2)return types;
        else return n/2;
        
    }
};