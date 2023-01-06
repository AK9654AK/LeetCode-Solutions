class Solution {
public:
    int maximum69Number (int num) {
        
        
        if(num==9999)return num;
        
        
        string str=to_string(num);
        for(int i=0;i<str.size();i++){
        if(str[i]=='6'){
            str[i]='9';
            break;
        }
        }
    
        
        
        return stoi(str);
        
    }
    
    
    
    
    
    // https://leetcode.com/problems/maximum-69-number/discuss/2786958/Without-String-Conversion-oror-Written-Explanation-oror-Easy-to-understand
    
//     int maximum69Number (int num) 
//     {
//         //first encountered '6' from left = last encountered '6' from right
        
//         int rightDigCount = -1; //number of digits to right of last encountered '6'
//         int digCount = 0; //number of digits to right of any dig at some instance
//         int temp = num; 
//         //====================================================================
//         while(temp > 0) //digits are being recorded from right to left of num
//         {
//             int dig = temp % 10;
//             if (dig == 6) rightDigCount = digCount; //record the rightDigCount when a '6' is encountered
            
//             digCount++;
//             temp = temp / 10;
//         }
//         //======================================================================
//         if (rightDigCount == -1) return num;
//         int ans = num + (3 * pow(10, rightDigCount));
//         return ans;
//     }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
};