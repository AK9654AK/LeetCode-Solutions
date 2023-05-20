class Solution {
public:
    bool stoneGame(vector<int>& piles) {
       
        int i=0;int j=piles.size()-1;int alice=0;int bob=0;
        bool aliceturn=true;
        
        while(i<=j){
            if(aliceturn){
            if(piles[i]>piles[j]){  ///alice
                alice+=piles[i];
                i++;
            }else{
                alice+=piles[j];
                j--;   
            }
            }
            
            else if(!aliceturn){
            if(piles[i]>piles[j]){  /////bob
                bob+=piles[i];
                i++;
            }else{
                bob+=piles[j];
                j--;   
            } 
            }
            
            !aliceturn;
        }
        
        return alice>bob;
        
        
        
        
        
        
        
        
    }
};