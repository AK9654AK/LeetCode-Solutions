class Solution {
public:
    int minPartitions(string n) {
        
        int max=0;
        for(auto x:n)if(x-'0'>max)max=x-'0';
        return max;
    }
};