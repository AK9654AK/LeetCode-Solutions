class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        
                
   

//          
//         int sum=0;
//         for(int i=0;i<arr.size();i++){
//             sum+=arr[i];
            
//         }
//         if(sum==0)return true;
        
//         if(sum==arr.size()*arr.size())return true;else return false; }
//         else return false;
        
       
        sort(arr.begin(),arr.end());
        
        int diff=arr[1]-arr[0];
       // if(arr.size()==2)return true;
        
        for(int i=1;i<arr.size();i++){
            if(arr[i-1] + diff != arr[i]) return false;
            
            
            
        }
        return true;
    }
    
};