class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
   int count=0;
        
    for(auto c:items){
    if(ruleKey=="type"&&c[0]==ruleValue)
     count++;
    else if(ruleKey=="color"&&c[1]==ruleValue)
     count++;
     else if(ruleKey=="name"&&c[2]==ruleValue)
     count++;
      }
      return count;
     }

};