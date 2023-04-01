class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
//         sort(stones.begin(),stones.end());
//         reverse(stones.begin(),stones.end());
        
//         int n=stones.size()-1;
        
//         while(stones[1]!=0){
//             if(stones[0]==stones[1]){
//                 stones[0]=0;stones[1]=0;    
//             }else if(stones[0]>stones[1]){stones[0]=abs(stones[1]-stones[0]);stones[1]=0;}
//             else if(stones[1]>stones[0]){stones[1]=abs(stones[0]-stones[1]);stones[0]=0;}
        
//         sort(stones.begin(),stones.end());
//         reverse(stones.begin(),stones.end());
//         }        
        
//         return stones[0];
        
        
        if(stones.size()==1)return stones[0];
        
        sort(stones.begin(),stones.end()); 
        int p=0;
        int q=0;
        int n=stones.size()-1;
        while(n!=0){
             p=stones[n];  
             q=stones[n-1]; 
            stones.pop_back(); 
             stones.pop_back();
            n=n-2;
            
            int temp=abs(p-q);
            // if(temp==0)continue;
             stones.push_back(temp);
            n++;
            sort(stones.begin(),stones.end());
            
        }
        return stones[0];
    }
};