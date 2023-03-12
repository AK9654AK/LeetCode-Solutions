class Solution {
public:
    int smallestEvenMultiple(int n) {
        int i=2;
        for(i;i<INT_MAX;i++){
            if(i%2==0 and i%n==0){
                break;
                // return i;
            }
        }
        return i;
        
        
    }
};