class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
         if(stones.size()==1)return stones[0];
        
        sort(stones.begin(),stones.end());
        
        while(stones.size()>1){
    sort(stones.begin(), stones.end());
    int x = stones.back(); stones.pop_back();
    int y = stones.back(); stones.pop_back();
    if(x!=y){
        stones.push_back(x-y);
    }
}

        if(stones.size()==0)return 0;
        return stones[0];
        
    
    }
};