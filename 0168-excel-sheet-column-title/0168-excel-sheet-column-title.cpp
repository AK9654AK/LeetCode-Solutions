class Solution {
public:
     string convertToTitle(int n) {
        string result="";
        while (n--){
            int it=n%26;
            result+='A'+it;
            n=n/26;
        }
        reverse(result.begin(), result.end());
        return result;
    }
};