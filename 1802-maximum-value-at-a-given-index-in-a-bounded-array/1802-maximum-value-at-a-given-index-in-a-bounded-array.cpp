class Solution {
public:
   int maxValue(int n, int index, int maxSum) {
        int value=1;
        int sum=n;
        int i=1;
        while(maxSum>=sum)
        {
            if(i>n)break;
            sum+=i;
            i+=2;
            if(int(i/2)+index>=n || index-int(i/2)<0)i--;
            value++;
        }
        if(i>n&&sum<=maxSum)
        {
            int left=maxSum-sum;
            value+=left/n+1;
        }
        return value-1;
    }
};