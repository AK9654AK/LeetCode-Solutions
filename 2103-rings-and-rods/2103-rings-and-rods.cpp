class Solution {
public:
    int countPoints(string rings) {
        
//         bool red[10]={false}; bool blue[10]={false}; bool green[10]={false};
        
//         for(int i=0;i<rings.size()-1;i+=2){
            
//             if(rings[i]=='R'){
//                 red[rings[i+1]-'0']=true;
//             }
//             if(rings[i]=='G'){
//                 green[rings[i+1]-'0']=true;          
//             }
//             if(rings[i]=='B'){
//                 blue[rings[i+1]-'0']=true;
//             }
            
//         }
        
//         int count=0;
        
//         for(int i=0;i<10;i++){
//             if(blue[i] and green[i] and red[i])count++;
//         }
        
        
//         return count;
        
        
        map<int,string>mp;
        bool r,g,b;
        
        for(int i=0;i<rings.size();i+=2){
          mp[rings[i+1]-'0']+=rings[i];
        }
        int count=0;
        
        // for(int i=0;i<10;i++){
            
        
        for(auto x:mp){
            r=false;g=false;b=false;
            string temp=x.second;
            
            
            for(auto t:temp){
                if(t=='R')r=true;
                else if(t=='B')b=true;
                else if(t=='G')g=true;
                if(r && g && b){count++;break;}
            }
        }
        
        return count;
    }
};