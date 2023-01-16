class Solution {
public:
    int countOdds(int low, int high) {
        
        
        return ((high+1)/2) - (low / 2); 
        
        
        
        
//        class Solution {
// public:
//     int countOdds(int low, int high) {
        
//         // approach - one 
        
//         /*
//         explanation - 
//         high + 1 / 2 gives the count of odd numbers from 1 to low 
        
//         low /2 gives the count of odd elements before the low 
        
//         low = 3  high = 7
        
//         low / 2 = 1
//         high + 1 / 2 = 4
        
//         |low coount - high count| = 3
//         */
        
//         return ((high+1)/2) - (low / 2); 
//     }
// };
// Approach - 2 (5ms)

// class Solution {
// public:
//     int countOdds(int low, int high) {
        
//         // approach - two
        
//         /*
//         explanation -
        
//         (high - low) / 2 gives the count of odd numbers
        
//         lets say we have low = 1 and high  = 10 
//         there will be exactly 5 odd elemets 
        
//         for n elemets there will be n/2 odd numbers
        
//         and as per problem statement the low and high itself are included so we need to check for them as well
        
//         */
        
//         int count = (high - low) / 2; 
        
//         if(high % 2 != 0 || low % 2 !=0)
//         {
//             count++;
//         }
//         return count;
//     }
// };
// Approach-3 (0ms)

// /*
// in this, 
// count will executes and stores the numbers of odd elements present in the range based on basic maths i.e. in the range 1 to 10 there are 5 odd numbers and 5 even numbers.

// now we need to check for the low and high values are odd or not, if anyone from the low or high is odd we will increment in the count and retutn the same.
// */
// int count = (high - low) / 2;
        
//         if(low % 2 != 0 || high % 2 != 0)
//         {
//             count++;
//         }
//         return count; 
        
    }
};