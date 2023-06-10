class Solution {
public:
    bool iseq(string & a,string &b)
{
    if(a.length()!=b.length())
    return false;
    int c=0;
    for(int i=0;i<b.size();i++)
    {
        if(a[i]!=b[i])
        c++;
        if(c>2)
        return false;
    }
    return true;
    
}
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
      
        vector<string>res;
       for(int i=0;i<queries.size();i++)
       {
           for(int j=0;j<dictionary.size();j++)
           {
               if(iseq(queries[i],dictionary[j]))
               {
              
                  
               res.push_back(queries[i]);
               
               
               break;
               }

           }
       }
       return res; 
    }
};