class Solution {
public:
    int findMinFibonacciNumbers(int k) {
        

        vector<long long>hash;
        
        hash.push_back(1);
        hash.push_back(1);
        
        for(int i=2;i<90;i++){
            hash.push_back(hash[i-1]+hash[i-2]);
        }
       int i=hash.size()-1;
        int count=0;
        while(k!=0){
        while(i>=0){
            if(hash[i]<=k){k=k-hash[i];
            count++;}
            i--;
        }}
            
        
        return count;
        
    }
};