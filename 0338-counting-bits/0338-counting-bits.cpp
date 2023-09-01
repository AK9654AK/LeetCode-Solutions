class Solution {
public:
    
    int count(int nm){
        
        int res=0;
        
        while(nm){
            res++;
            nm&=(nm-1);
        }
        
        return res;
    }
    
    
    
    vector<int> countBits(int n) {
       
        
        
        vector<int>res;
        for(int i=0;i<=n;i++){
            res.push_back(count(i));
        }
        return res;
    }
};