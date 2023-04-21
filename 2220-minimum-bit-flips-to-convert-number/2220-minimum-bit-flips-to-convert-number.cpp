class Solution {
public:
    int minBitFlips(int start, int goal) {
        
        vector<int>st;
        vector<int>end;
        
        
        int i=0;
        while(start!=0){
            if((start&1)==0){st.push_back(0);}
            else if((start&1)==1)st.push_back(1);
            start/=2;i++;
        }
        
        // st.resize(i);
        
         int j=0;
        while(goal!=0){
            if((goal&1)==0)end.push_back(0);
            else if((goal&1)==1)end.push_back(1);
            goal/=2;j++;
            
        }
        
        // end.resize(j);
        
            int size=max(i,j);
        
        st.resize(size);
        end.resize(size);
        
        reverse(st.begin(),st.end());
        reverse(end.begin(),end.end());
        
        int count=0;
        
    
        
        for(int i=0;i<size;i++){
            if(st[i]!=end[i])count++;
            
        }
        
        return count;
    }
};