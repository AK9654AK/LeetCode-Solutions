class Solution {
public:
   int helper(vector<int>& stoneValue, int index, int sum, unordered_map<string, int> &dp) {
        int n = stoneValue.size();
        if(index>=n) {
            return 0;
        }
        string key = to_string(index) + " " + to_string(sum);
        if(dp.find(key) != dp.end()) {
            return dp[key];
        }
        int maxStones = INT_MIN;
        int sumSoFar = 0;
        for(int i=0;i<=2 && index+i<n;i++) {
            sumSoFar += stoneValue[index+i];
            maxStones = max(maxStones, sum - helper(stoneValue, index+i+1,sum-sumSoFar,dp));
        }
        return dp[key] = maxStones;
    }
    string stoneGameIII(vector<int>& stoneValue) {
        int n = stoneValue.size();
        int index = 0;
        int sum = 0;
        for(int i=0;i<n;i++) {
            sum += stoneValue[i];
        }
        unordered_map<string, int> dp;
        int alice = helper(stoneValue,0,sum,dp);
        int bob = sum - alice;
        if(alice>bob) {
            return "Alice";
        } else if(alice==bob) {
            return "Tie";
        }
        return "Bob";
    }
};