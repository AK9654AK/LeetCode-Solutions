class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) {
        long long a1 , a2;
        vector<long long> pairSum;
        long long n = weights.size();
        
        for(long long i = 1; i < n ;i++) {
            pairSum.push_back(weights[i] + weights[i-1]);
        }
        sort(pairSum.begin(),pairSum.end());
    
        long long answer = 0;
        for (int i = 0; i < k - 1; ++i) {
            answer += pairSum[n - 2 - i] - pairSum[i];
        }
        return answer;

    
    }
};