class Solution {
public:
    vector<int> diStringMatch(string s) {
        
        int n=s.size();
        vector<int>vec;
        int i=0;int d=s.size();
        vector<int>abhi(n+1);
        
        
        for(int k=0;k<s.size();k++){
            if(s[k]=='I'){
                vec.push_back(i);
                i++;
            }
            else if(s[k]=='D'){
                vec.push_back(d);
                d--;
            }
            
        }
        // d--;
        
        vec.push_back(d);
        
        
        return vec;
        
    }
};