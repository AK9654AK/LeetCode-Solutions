class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>abhi;
        
        for(int i=left;i<=right;i++){
            int n=i;
            bool flag=true;
            while(n){
                int digit=n%10;
                 if(digit==0||i%digit!=0){flag=false;break;}
                n/=10;
            }
        
             if(flag)abhi.push_back(i);          
        }
        return abhi;
    }
};