class Solution {
public:
    vector<int> constructRectangle(int area) {
//         int fact=0;
//         for(int i=1;i<area-1;i++){
//             if(ceil(area/i)==floor(area/i))fact=i;
//         }
        
//         int div=area/fact;
//         if(div>=fact)return {div,fact};
//         else 
//         return {fact,div};
        
        int root=sqrt(area);
        
        while(1){
            if(area%root==0)break;
            else root--;
            
        }
        
        return {area/root,root};
        
    }
};