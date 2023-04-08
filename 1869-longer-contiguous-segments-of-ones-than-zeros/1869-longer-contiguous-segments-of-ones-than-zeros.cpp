class Solution {
public:
    bool checkZeroOnes(string s) {
       
        int cz,co;
        int maxo=0;
        int maxz=0;
        
        for(auto i:s){
            if(i=='1'){co++;cz=0;}
            if(i=='0'){cz++;co=0;}
            maxo=max(maxo,co);
            maxz=max(maxz,cz);
        }
        if(maxo>maxz)return true;
        else return false;
    }
};