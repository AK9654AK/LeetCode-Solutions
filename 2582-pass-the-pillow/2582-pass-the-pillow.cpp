class Solution {
public:
    int passThePillow(int n, int time) {
        
       int i=1; bool check=false;int change=1;
       while(time--){
          if(check==false){
              i++;
              // change++;
              if(i==n)check=true;
              
          }
          else if(check==true){
              i--;
              // change--;
              if(i==1)check=false;
          }
        }
        
        return i;
        
        
    }
};