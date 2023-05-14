class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=0;
        string s="";
        int n=digits.size();
        for(int i=n-1;i>=0;i--){
            if(digits[i]==9){
                digits[i]=0;
                // s.push_back('0');
            }
            else{ 
            // if(carry==1){s.push_back(1+s[i]+'0');carry=0;}
            //     else if(carry==0)s.push_back(s[i]+'0');
            digits[i]++;
                return digits;
        }
        }
//         digits.clear();
//         reverse(s.begin(),s.end());
//         for(auto x:s)digits.push_back(x-'0');
        digits[0]=1;
        digits.push_back(0);
        return digits;
    }
};