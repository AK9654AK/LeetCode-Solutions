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




//Another aproach to save space of the hash map;
// int numJewelsInStones(string jewels, string stones) {
//         int cnt = 0;
//         vector<int> hash(100, 0);   //can be changed to 58In the ASCII table, there are 6 positions reserved 
//                                       for symbols between the sets of uppercase and lowercase alphabet. 26*2+6=58. 
        
//         for(char it : jewels)
//             hash[(int)(it-65)]++;
        
//         for(char it : stones)
//             if(hash[(int)(it-65)] > 0)
//                 cnt++;
        
//         return cnt;
//     }
