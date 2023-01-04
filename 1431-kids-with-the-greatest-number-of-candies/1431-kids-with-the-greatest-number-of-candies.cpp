class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
      
        
        int max = *max_element(candies.begin(),candies.end());
       
        
    //min_element and max_element return iterators, not values. So you need *min_element... and *max_element.... 
        //https://stackoverflow.com/questions/10158756/using-stdmax-element-on-a-vectordouble
        
        vector<bool>v;
        int total=extraCandies+max;
        
        for(int i=0;i<candies.size();i++){
            if((candies[i]+extraCandies)>=max)
                v.push_back(1);
            else v.push_back(0);
            }
        
        
        
        
        return v;
        
        
 
        
    }
   
    
    
};