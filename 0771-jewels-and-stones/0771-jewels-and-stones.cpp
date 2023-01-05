class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        
       
        
         int hash[123]={0};
//ASCII CODE OF LAST CHAR OF THE SMALL LETTER Z        
        
    int lengthofJ=jewels.size();
    int lengthofS=stones.size();
    int ans=0;
        
        
    for(int i=0;i<lengthofJ;i++){
        hash[jewels[i]]++;
    }
    for(int i=0;i<lengthofS;i++){
        if(hash[stones[i]]!=0){
            ans++;
        }
    }
    return ans; 
        
    }
};