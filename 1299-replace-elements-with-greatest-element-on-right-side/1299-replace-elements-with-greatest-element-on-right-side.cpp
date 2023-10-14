class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        
        int currlar=arr[arr.size()-1];
        arr[arr.size()-1]=-1;
        for(int i=arr.size()-2;i>=0;i--){
            if(arr[i]>currlar){
                int temp=arr[i];
                arr[i]=currlar;
                currlar=temp;
            }
            else{
                arr[i]=currlar;
            }
        }
        
        return arr;
        
    }
};