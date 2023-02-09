class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        
        
        int n=nums.size();
        if(nums.size()==0)return 0;
        if(n==1)return 1;
  
      sort(nums.begin(),nums.end());
        
      int i=0;
      int count=0;
      int temp=1;
      
      
      for(int i=1;i<n;i++){
          
          if(nums[i]==nums[i-1]+1){
              temp++;
             
              
          }
          else if(nums[i]!=nums[i-1]){ count=max(count,temp);
               temp=1;
              }
          
      }
        
        count=max(count,temp);
      return count;
        
        
        
//         (Concept of map (Three step process), Accepted)-

// In the first step, for every element of the array we assume that it is the starting point of some consecutive sequence.

// We know that this is not right, so for a moment we just assume that every element is the starting point of some consecutive sequence.

// So we will take a map, and with every element as key we put value 1 for each element.

// Now, in the second step we check for every element whether (arr[i] - 1)(arr[i] being any element of the array) is present in our map or not.

// Suppose if (arr[i] - 1) is present in our map, then in the first step the assumption we made that every element can be the starting point of some consecutive sequece goes wrong.

// Because if (arr[i] - 1) is present in the array then we can surely say that arr[i] can't be the starting point of any consecutive sequence.

// So, if(arr[i] - 1) is presnt in the array then we put zero for arr[i] in the map.

// Because at this point we can surely say that since (arr[i] - 1) is present in our map, so arr[i] can't be our starting point.

// Suppose, if arr[i] is 5 and we search for (arr[i] - 1) i.e (5 - 1 = 4) is present in our map or not. If 4 is present in our map, then 5 can't be the starting consecutive sequence, so in map we put zero for 5

// In the third step, Now, we can surely say that the elements for which 1 is present in map are definately going to be the starting point of the some consecutive sequence.

// So our task is left now, for every element for which 1 is presnt in map the now, for them we find the length of their consecutive sequence, and out of them whatever will be the maximum length is going to our answer.

// Taking an example for better understanding, see below.

// Suppose our given array is arr[]: [12, 13, 2, 3, 4, 5, 8, 9, 10, 11, 78, 79, 80]

// 1) In the first step, we make a map and for every element we put 1.
//   (Assuming that every element can be the starting point of some consecutive sequence)
//   so map looks like:-
  
//   map
//   element (key)      |    value
// 		 12          |     1
// 		 13          |     1
// 		  2          |     1
// 		  3          |     1
// 		  4          |     1
// 		  5          |     1
// 		  8          |     1
// 		  9          |     1
// 		 10          |     1
// 		 11          |     1
// 		 78          |     1
// 		 79          |     1
// 		 80          |     1
		 
// 2) Now, in the second step, we will see whether (arr[i] - 1) is present in our map or not.
//     If (arr[i] - 1) is present in our map, then arr[i] can't be the starting point of some consecutive sequence.
	
// 	so, map looks like:-
// 	 map
//   element (key)      |    value
// 		 12          |     0          (since (12 - 1 = 11) is present in map so we put zero in front of 12)
// 		 13          |     0          (since (13 - 1 = 12) is present in map so we put zero in front of 13)
// 		  2          |     1          (since (2 - 1 = 1) is not present in map so we leave 2 as it is)
// 		  3          |     0          (since (3 - 1 = 2) is present in map so we put zero in front of 3)
// 		  4          |     0          (since (4 - 1 = 3) is present in map so we put zero in front of 4)
// 		  5          |     0          (since (5 - 1 = 4) is present in map so we put zero in front of 5)
// 		  8          |     1          (since (8 - 1 = 7) is not present in map so we leave 8 as it is)
// 		  9          |     0          (since (9 - 1 = 8) is present in map so we put zero in front of 9)
// 		 10          |     0          (since (10 - 1 = 9) is present in map so we put zero in front of 10)
// 		 11          |     0          (since (11 - 1 = 10) is present in map so we put zero in front of 11)
// 		 78          |     1          (since (78 - 1 = 77) is not present in map so we leave 77 as it is)
// 		 79          |     0          (since (79 - 1 = 78) is present in map so we put zero in front of 79)
// 		 80          |     0          (since (80 - 1 = 79) is present in map so we put zero in front of 80)
		 
// 3) Now, in the third step, the elements for which 1 is left in the map, for them we can definately say
//     that they are starting point of some consecutive sequence.
// 	Here we can see that elements 2, 8, and 78 definately starting some consecutive sequence.
	
// 	The only task is left to us now is to find the longest length of the consecutive sequence.
// 	How we are going to do that? let see-
	
// 	Now, at this point we are only going to care about those elements which are having value as 1 in the map.
// 	We also say that they are definately going to be the starting point some consecutive sequence, right.
// 	so, intially we define our length as 1, because they are the starting point so its definite they are having length atleast 1.
// 	suppose we take 2, so intially length = 1
// 	what we search now, we say 2 is there, ok, it's fine
// 	now we ask whether 3 is there or not, we say yes it is their, so we increase our length as 2
// 	again, we say whether 4 is there or not, and according to presence we increase our length.
	
// 	so if we observe everytime what we asking for, 
// 	suppose arr[i] is being 2 and intially length is 1
	
// 	so if i ask whether (arr[i] + length) is present or not, 
// 	than what (arr[i] + length) is, it is (2 + 1 = 3), we say yes 3 is there
// 	so we increase our length as 2
	
// 	now, if we ask again (arr[i] + length) what it looks like, it looks like
// 	arr[i] is 2, but length is 2 now so (2 + 2 = 4) is present or not, we say yes  
// 	so we increase our length by 1, so length becomes 3
	
// 	again now, if we ask again (arr[i] + length) what it looks like, it looks like
// 	arr[i] is 2, but length is 3 now so (2 + 3 = 5) is present or not, we say yes  
// 	so we increase our length by 1, so length becomes 4
	
// 	In this way we can say that with the help of length we find the length of the consecutive sequence.
// 	And out of them whatever the will give me the maximum length should be my answer.
	
// 	So, if we talk about our above example,
	
// 	elements that left with value 1 are (2, 8 and 78)
// 	for 2, we will see (2, 3, 4, 5) is the sequence, so length is 4
// 	for 8, we will see (8, 9, 10, 11, 12, 13) is the sequence, so length is 6
// 	and for 78, we will see (78, 79, 80) is the sequence, so length is 3
	
// 	so out of three of them maximum is ({4, 6, 3}) is 6
// 	so, 6 will be my final answer.
	
// 	I hope you got the concept, see commented code for better understanding.
// Time Complexity --> O(n + n + n) = O(3n) ~ O(n) 
// // where n is the size of the array and since we are traversing array three times 
// // 1) for putting 1 for each element (step 1)
// // 2) for improving our assumption (step 2)
// // 3) for finding sequence (step 3)

// Space Complexity --> O(n) // since we are using map
// It paases [ 71 / 71 ] in built test cases
        
        
        
        
        
        
        
        
        
        
        
        
        
        
//           int n = arr.size(); // extract the size of the array
        
//         unordered_map<int, int> mp; // declaring unordered map
        
//         // Step 1)  we are giving 1 to each of the elemnt
//         // (Assuming that it may be the starting point of consecutive sequence)
//         for(int i = 0; i < n; i++)
//         {
//             mp[arr[i]] = 1;
//         }
        
//         // step 2) validating our assumption taken in step 1
//         for(int i = 0; i < n; i++)
//         {
//             if(mp.find(arr[i] - 1) != mp.end()) // if(arr[i] - 1) is present in map
//             {
//                 // then arr[i] can never be the starting point some of consecutive sequence
//                 // so give value zero for that arr[i]
//                 mp[arr[i]] = 0;
//             }
//         }
        
//         // step 3) Now the elements for which value 1 is left
//         // for them we definately know they are the starting point of 
//         // some consecutive sequence, using that length trick we find the maxlen
        
//         int mxLen = 0; // this variable holds my answer
        
//         for(int i = 0; i < n; i++) // travel in the array
//         {
//             // if value is 1, then they are starting point some of consecutive sequence
//             if(mp[arr[i]] == 1) 
//             {
//                 // if it is the starting point, then definately length is going to be 
//                 // atleast 1
//                 int length = 1; 
                
//                // we dicuss it above
//                 while(mp.find(arr[i] + length) != mp.end())
//                 {
//                     length++;
//                 }
                
//                 mxLen = max(mxLen, length); // update mxLen
//             }
//         }
        
//         return mxLen; // Finally return mxLen
//     }
        
        
        
      
    }
};