class Solution {
public:
    
//     void move(vector<int>& arr,int &start){
        
//         int j=arr.size()-1;
//         int i=i+1;
        
//         while(i<j){
            
//             swap(arr[j],arr[j+1]);
//             j--;
            
            
//         }
        
        
//     }
    
    
    void duplicateZeros(vector<int>& arr) {
        vector<int>abhi;
        for(int i=0;i<arr.size();i++){
            
            if(arr[i]==0){
                abhi.push_back(arr[i]);
                abhi.push_back(0);
            }
            else abhi.push_back(arr[i]);
            
        
         if(abhi.size()>=arr.size()){
                break;
            }
    }
        if(abhi.size()>arr.size()){
            abhi.pop_back();
        }
        
        arr=abhi;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
//         for(int i=0;i<arr.size()-1;i++){
            
            
//             if(arr[i]==0){
                
//                 move(arr,i);
//                 arr[i+1]=0;
//                 i++;
                
//             }
            
//         }
        
        
        
        
        
        
    }
};