class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int prev=0;int ans=0;
        int count=0;
        
        vector<int>v;
        if(bank.size()==1)return 0;
        
        for(auto x:bank){
            count=0;
            
            for(auto i:x){
                if(i=='1')count++;
            }
            
            if(count!=0){
                // v.push_back(count);
                ans+=prev*count;
                prev=count;
            }
        }
                
//         int sum=0;
        
//         for(int i=0;i<v.size()-1;i++){
//             sum+=v[i]*v[i+1];
//         }
        
        
        
        return ans;
        
        
    }
};