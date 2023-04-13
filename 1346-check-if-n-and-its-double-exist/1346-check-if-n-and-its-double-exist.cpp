class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
       int i = 0;
    int j = 0;
    
     for(;i<arr.size()-1;){
         if(arr[i]==arr[j]*2&&i!=j&&i>=0){
             return true;
         }
        
         if(j<arr.size()-1){
             j++;
          } 

        else {
            i++;
            j = 0;
        }
     }
    return false;
    
    }
};