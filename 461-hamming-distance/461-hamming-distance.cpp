class Solution {
public:
    int hammingDistance(int x, int y) {
        
//         vector<int>n1;
//         vector<int>n2;
        
//         int i=0;int j=0;
//         while(x){
//             if(x&1)n1.push_back(1);
//             else n1.push_back(0);
//             x=x/2;i++;
//         }
        
//           while(y){
//             if(y&1)n2.push_back(1);
//             else n2.push_back(0);
//             y=y/2;j++;
//         }
        
//         int size=max(i,j);
//         n1.resize(size);
//         n2.resize(size);
//         reverse(n1.begin(),n1.end());
//         reverse(n2.begin(),n2.end());
//          i=0;
                           //////////////   Not   Woring     ////////////
        
//         int firstpos=-1;
//           int lastpos=-1;
//             for(int i=0;i<size;i++){
//     if(n1[i] != n2[i]){
//         if(firstpos==-1){
//             firstpos=i;
//         }
//         lastpos = i;
//     }
// }
        
        
        
////// Bit manipulation method:///
        
        int n=x^y;
        int answer=0;
        while(n){
           answer+=n%2;
            n/=2;
        }
    
        return answer;
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};