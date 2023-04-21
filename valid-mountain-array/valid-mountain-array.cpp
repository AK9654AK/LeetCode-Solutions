class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        
        if(arr.size()<3)return false;
        int c=0;
        int mt=-1;
        for(int i=1;i<arr.size()-1;i++){
            if(arr[i]==arr[i-1]|| (arr[i]<arr[i-1] and arr[i]<arr[i+1]))return false;
            if(arr[i]>arr[i-1] and arr[i]>arr[i+1]){c++;}
           
            
        }
        
//      if(c!=1)return false;
        
//         return true;
        return c==1;
        
        
        
    }
};