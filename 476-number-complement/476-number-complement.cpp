class Solution {
public:
    int findComplement(int num) {
        int ans=1;
        while(ans<num){
        ans<<=1;
        ans |=1;
        }
        return ans^num;
    }
};