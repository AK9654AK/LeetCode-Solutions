class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
     int n=prices.size();
    vector<int>abhi(n);

    for(int i=0;i<n-1;i++) {
        int j=i+1;
        while(j<n&&prices[j]>prices[i]){
            j++;
        }
        if(j<n)abhi[i]=prices[i]-prices[j]; //if j lies under n;means discount exists
        else abhi[i]=prices[i];    //nodiscount at all
    }
    abhi[n-1]=prices[n-1];
    return abhi;
}
};