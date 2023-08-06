#define ll long long
#define mod 1000000007

class Solution {
public:
    
    int L, N, K;
    ll dp[109][109];

    ll solve(int len, int num){
        if(len == L){
            return num == N;
        }

        if(dp[len][num] != -1){
            return dp[len][num];
        }

        ll ans = (solve(len+1, num)*max(0, num-K)) % mod;
        ans += (solve(len+1, num+1) * (N-num)) % mod;
        ans %= mod;

        return dp[len][num] = ans % mod;
    }

    int numMusicPlaylists(int N, int L, int K) {
        this->N = N;
        this->L = L;
        this->K = K;
        memset(dp, -1, sizeof(dp));

        return solve(0, 0);
    }
};