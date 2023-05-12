class Solution {
public:
    string truncateSentence(string s, int k) {
        string res="";
        int count=0;
        for(auto x:s){
            if(isspace(x)){if(count==k-1)break;else count++;}
            res+=x;
        }
        return res;
        
    }
};