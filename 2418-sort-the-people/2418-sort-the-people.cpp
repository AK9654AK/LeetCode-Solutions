class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
     
        ////here we have to use map since we are wanting whole list of names, 
        // more precisely we are going to use  
        
        
        map<int,string>abhi;
        vector<string>ans;
        for(int i=0;i<size(names);i++)
            abhi[heights[i]]=names[i];  //putting values
        
        for(auto i=abhi.rbegin();i!=abhi.rend();i++)ans.push_back(i->second);  //puttign names
        return ans;
        
        
        
    }
};