class Solution {
public:
    int commonFactors(int a, int b) {
        
        int count=0;
        int diff;
        if(a>b)diff=a;else diff=b;
        
        for(int i=1;i<=diff;i++){
            if(a%i==0 and b%i==0)count++;
        }
        
        return count;
        
    }
};