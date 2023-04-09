class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        
        vector<int>abhi(num_people,0);
        
        if(num_people==1)return {candies};
        int i=0;
        
        int can=1;
      while(candies>0){
          
          if(candies>can){
              abhi[i%(num_people)]+=can;candies-=can;
                         }
        
          else if(candies<=can){abhi[i%num_people]+=candies;candies=0;}
          i++;can++;
       
               }
        
        return abhi;
    
        
    }
};