class Solution {
public:
    int bitwiseComplement(int n) {
        
//     vector<int> ans;
    
//     while (n) {
//         ans.push_back(n % 2);
//         n = n / 2;
        
//     }
//         reverse(ans.begin(),ans.end());

//     int abhi =0;
//     for (int i = 0; i < ans.size(); i++) {
//         if (ans[i] == 1) {
//             ans[i] = 0;
//         } else if (ans[i] == 0) {
//             ans[i] = 1;
//         }
//     }
//         int power=1;
             
//     for (int i =ans.size()-1; i>=0;i--) {
//             abhi+=power*ans[i];
//             power*=2;
//         }
//     return abhi;
        
        
        int ans=1;
        while(ans<n){
            ans<<=1;
            ans|=1;
        }
        
        return ans^n;
        
        
}};