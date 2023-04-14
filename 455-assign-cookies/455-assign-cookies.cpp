class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        
        sort(g.rbegin(),g.rend());
        sort(s.rbegin(),s.rend());
        int j=0;
        int res=0;
        
        for(int i=0;i<g.size();i++){
            if(j<s.size() and g[i]<=s[j]){
                res++;j++;
            }
        }
        
        
        return res;
        
    }
};