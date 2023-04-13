class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        
        bool check=true;
        for(int i=0;i<arr.size()-1;i++){
            for(int j=0;j<arr.size();j++){
                if(i!=j &&arr[i]==2*arr[j]){
                    
                    check=false;
                    break;
                }
            }
        }
        
        if(check==false)return true;
        return false;
    }
};