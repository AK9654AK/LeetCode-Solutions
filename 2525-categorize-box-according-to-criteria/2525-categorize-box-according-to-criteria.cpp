class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        bool d=false;
        if(width>=10000||height>=10000||length>=10000)d=true;
        
        long long int vol=static_cast<long long int>(length)*width*height;bool v=false;
        if(vol>=pow(10,9))v=true;
        
        if((d||v) and mass<100 )return "Bulky";
         else if((d|| v) and mass>=100)return "Both";
        else if(mass>=100)return "Heavy";
        else return "Neither";
        
       
        
        
        
    }
};