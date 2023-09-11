class Solution {
public:
    int countOrders(int n) {
        long long mod=1e9+7,res=1;

        for(int i=1;i<=n;i++){
            res = (res*i)%mod;
            res*=(2*i-1);
            res%=mod;
        }

        return res;
    }
};