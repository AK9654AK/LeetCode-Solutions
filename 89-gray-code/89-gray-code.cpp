class Solution {
public:
    vector<int> grayCode(int n) {
    vector<int>result={0,1};

    for (int i=2;i<=n;i++){
        vector<int> ans=result;
        reverse(ans.begin(),ans.end());
      int l=pow(2,i-1);
      
      for (int j=0;j<ans.size();j++)result.push_back(l+ans[j]);
      }
    

    return result;
  }
};