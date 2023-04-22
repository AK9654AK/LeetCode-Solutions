class Solution {
public:
    int minInsertions(string s) {
        vector<int>dp;
    for (char c:s) {
        dp.push_back(0);
        int right=0;
        for (int i=dp.size() - 2; i >= 0; i--)
            right=exchange(dp[i],s[i]==c?right:1+min(dp[i],dp[i+1]));
    }
    return dp[0];
    }
};