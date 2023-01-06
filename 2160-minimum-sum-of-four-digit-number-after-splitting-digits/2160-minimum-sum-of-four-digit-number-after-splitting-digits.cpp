class Solution {
public:
    
   
        
     
//                                                   //I have take  2  2 number set in order to solv3 this problem 
//         int rev;
//         int digit;
//             while(number!=0){
//                 digit=number%10;
//                 number/=10;
//                 rev=rev*10+digit;
                
//             }
//         return rev;
//         }

    
    
    
    int minimumSum(int num) {//         Now while creating the two digit, in order to minimize the sum, we need to ensure that the smaller numbers are on tens place, while the larger nubers are kept on ones.
// Also, Note that the question mentions that "Leading Zeros are allowed."
// If leading zeros weren't allowed, then the approach would have been different.

// So using simple mathematics(By dividing and taking modulus), we store 4 digits of the 4 digit number in a array.
// Sort the array and return the sum of numbers
// num1 = arr[0] * 10 + arr[2];
// num2 = arr[1] * 10 + arr[3];
// sum = num1 + num2 = (arr[0] + arr[1]) * 10 + arr[2] + arr[3]
        
        int a[4] = {0};
        a[0] = num % 10;
        num /= 10;
        a[1] = num % 10;
        num /= 10;
        a[2] = num % 10;
        num /= 10;
        a[3] = num % 10;
        sort(a, a + 4);
        
        
        
        return ((a[0] + a[1]) * 10 + a[2] + a[3]);
        
        
        
        
        
        
//     int first=num/100;
//         int second=num%100;
        
//         int rev1=reverse(first);
//         int rev2=reverse(second);                     //added only which set is smaller than original set as given in the question;
        
//         if(rev1<first)first=rev1;
//         if(rev2<second)second=rev2;
        
        
        
//         int sum=
//         return first+second;
        
        
        
        
        
        
        
        // 74 / 99 test cases passed.
        
        
        
        
    }
};
