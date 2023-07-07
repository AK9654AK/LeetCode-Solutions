class Solution {
    int solve(char c, string s, int k) {
        int n = s.size(), ans = 0, i = 0;

        for(int j=0; j<n; j++) {
            if(s[j] != c) k--;

            while(k < 0) {
                if(s[i] != c) k++;
                i++;
            }
            ans = max(ans, j - i + 1);
        }
        return ans;
    }
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        return max(solve('T', answerKey, k), solve('F', answerKey, k));
    }
};