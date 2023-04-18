class Solution {
public:
  bool hasNoZero(int n) {
        while(n){
            if(n%10==0)return false;
            n/=10;
        }
        return true;
    }
    
    vector<int> getNoZeroIntegers(int n){
        for(int i=1;i<n;i++) {
            if(hasNoZero(i) && hasNoZero(n-i)){
                return {i,n-i};
            }
        }
        return {-1,-1};
    }
};