class Solution {
public:
    int pivotInteger(int n) {
      int lsum=0,rsum=0; 
        for(int i=1;i<=n;i++)rsum+=i;
       for(int i=n;i>0;i--)
       {
           lsum+=i;
           if(rsum==lsum) return i;
          rsum-=i;
       }
        return -1;
    }
};