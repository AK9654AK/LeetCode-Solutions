class Solution {
public:
    int lengthOfLongestSubstring(string s) {
     
        
        int i=0;int j=0;int n=s.size();int answer=0;
        set<char> mp;
        
        while(i<n){
            
            
            auto it=mp.find(s[i]);
            if(it==mp.end()){   //if element is not in mp
                if(i-j+1>answer)
                  answer=i-j+1;
                mp.insert(s[i]);
                i++;
            }
            else{
                mp.erase(s[j]);
                j++;
            }
            
            
        }
        
        return answer;   
    }
    
    
    
//////////////////////////////////////////////////////////////////////////////////////////////////////////////    ////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    
//     O(n^3) - Naive Solution

// class Solution {
// public:
//     bool areDistinct(string str, int i, int j)
//     {
//         vector<bool> visited(26);
//         for(int k = i; k <= j; k++)
//         {
//             if(visited[str[k] - 'a'] == true) return false;
//             visited[str[k] - 'a'] = true;
//         }
//         return true;
//     }
//     int lengthOfLongestSubstring(string s) {
//         int n = s.size();
//         int res = 0;
//         for(int i = 0; i < n; i++)
//         {
//             for(int j = i; j < n; j++)
//             {
//                 if(areDistinct(s,i,j))
//                     res = max(res, j-i+1);
//             }
//         }
//         return res;
//     }
// };
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
// O(n^2) - Sliding Window

    
    
// class Solution {
// public:
//     // Whenever we see repetition, we remove the previous occurrence and slide the window.
//     int lengthOfLongestSubstring(string s) {
//         int n = s.size();
//         int res = 0;
//         for(int i = 0; i < n; i++)
//         {
//             vector<bool> visited(256);
//             for(int j = i; j < n; j++)
//             {
//                 // if curr character is visited, break.
//                 if(visited[s[j]] == true)
//                     break;
//                 else
//                 {
//                     res = max(res, j-i+1);
//                     visited[s[j]] = true;
//                 }
//             }
//             //Remove first character of previous window
//             visited[s[i]] = false;
//         }
//         return res;
//     }
// };
    
    
    
    
    
// O(n) - Optimized Sliding Window

    
    
    
    
// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         vector<int> chars(128);
 
//         int left = 0;
//         int right = 0;
 
//         int res = 0;
//         while (right < s.length()) {
//             char r = s[right];
//             chars[r]++;
// 			 // remove the character from the current window and slide further.
//             while (chars[r] > 1) {
//                 char l = s[left];
//                 chars[l]--;
//                 left++;
//             }
 
//             res = max(res, right - left + 1);
 
//             right++;
//         }
 
//         return res;
//     }
// };

    
    
    
    
    
    
    
    
    
    
// int lengthOfLongestSubstring(string s) {
//         vector<int> dict(256, -1);
//         int maxLen = 0, start = -1;
//         for (int i = 0; i != s.length(); i++) {
//             if (dict[s[i]] > start)
//                 start = dict[s[i]];
//             dict[s[i]] = i;
//             maxLen = max(maxLen, i - start);
//         }
//         return maxLen;
//     }

    
    
    
    
    
// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) 
//     {        
//         // Return 0 if string is empty
//         if( s == "") { return 0; }
        
//         // Hash table for storing characters and indexes
//         map<char, int> characters;       
        
//         // Longest sequence that will be returned in the end: for sure will be > 1 because 0 result was checked in the beginning
//         int longest = 1;
//         int j = 0;
        
//         // Each character from string add to HashTable with his index. If we reach same character again - update index
//         for (int i = 0; i < s.length(); ++i)
//         {
//             // If current character already exist in the HashTable  
//             if ( characters.find(s[i]) != characters.end() )
//             {
//                 // Take larger index for future calculation between old and current+1 in HashTable
//                 j = j >= characters.find(s[i])->second + 1 ? j : characters.find(s[i])->second + 1;
//             }
//             // Add character with current index to HashTable
//             characters[s[i]] = i;
//             // longest will be chosen between larger value: old longest OR current sequance between i and j indexes + 1
//             longest = longest >= i - j + 1 ? longest : i - j + 1;
//         }
        
//         return longest;
//     }
// };
// Next will be my first try with brute force solution that has O(n^3) complexity. This approach will work here in LeetCode for small strings, but for big you will receive status 'Time Limit Exceeded'. In your IDE it will work even for big strings but very slowly. Iterator used just for practice. New method was created in private section for checking dublicates in substring - bool dublicatesInSubstring(string& s, const int substringBegin, const int substringEnd).

// class Solution {
// private:
//     // Method for dublicates check in substring
//     bool dublicatesInSubstring(string& s, const int substringBegin, const int substringEnd)
//     {
//         std::map<char, int> charactersOfSubstr;
//         std::map<char, int>::iterator it;
        
//         // Check substring for dublicates
//         for(int i = substringBegin; i <= substringEnd; ++i )
//         {
//             // Add character to HashTable
//             it = charactersOfSubstr.find(s[i]);
//             if ( it != charactersOfSubstr.end() )
//             {
//                 it->second++;
//             }
//             else
//             {
//                 charactersOfSubstr.insert(std::pair<char,int>(s[i], 0));
//             }
//             // In case HashTable has more that one such character - return true that means dublicates exist in substring
//             if( it->second > 0 )
//             {
//                 return true;
//             }
//         }
        
//         return false;
//     }
    
    
    
// public:
//     int lengthOfLongestSubstring(string s) 
//     {
//         // Return 0 if string is empty
//         if( s == "") { return 0; }
        
//         // Longest sequence that will be returned in the end
//         int longest = 0;
        
//         // For each character from string - ckech longest sequence untin end of the string
//         for (int i = 0; i < s.length(); ++i)
//         {
//             for(int j = i; j < s.length(); ++j)
//             {
//                 // In case no dublicates - function return false and longest substring should be calculated
//                 if ( !dublicatesInSubstring(s, i, j) )
//                 {
//                     longest = longest >= j - i + 1 ? longest : j - i + 1;
//                 }
//             }
//         }
        
//         return longest;
//     }
// };
// My next try was approach with O(n^2) complexity that much faster than previous and LeetCode finished all test cases without 'Time Limit Exceeded' status. Iterator also used only for practice.

    
    
    
// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) 
//     {        
//         // Return 0 if string is empty
//         if( s == "") { return 0; }
        
//         std::map<char, int> charactersOfSubstr;
//         std::map<char, int>::iterator it;        
        
//         // Longest sequence that will be returned in the end
//         int longest = 0;
        
//         // For each character from string - check longest sequence until encountered dublicate
//         for (int i = 0; i < s.length(); ++i)
//         {
//             // HashTable should be cleared before starting with new substring analyzing
//             charactersOfSubstr.clear();
//             for(int j = i; j < s.length(); ++j)
//             {
//                 // Try to find character in the HashTable
//                 it = charactersOfSubstr.find(s[j]);
                
//                 // If current character already exist in the HashTable - quit from j-loop to get next character for analyze
//                 if (it != charactersOfSubstr.end())
//                 {
//                     break;
//                 }
//                 // If character doesn't exist in HashTable - add it and recount unique sequence lenght
//                 else
//                 {
//                     charactersOfSubstr.insert(pair<char, int>(s[j], 1));
                                              
//                     // longest will be choseт between larger value: old longest OR current sequance (j - i + 1)
//                     longest = longest >= j - i + 1 ? longest : j - i + 1;
//                 }                
//             }
//         }
        
//         return longest;
//     }
// };
// Next try was very close to O(n) but still loop inside loop used. After this approach I thought that it's possible to get rid of nested loop.

    //
    
    
    
// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) 
//     {        
//         // Return 0 if string is empty
//         if( s == "") { return 0; }
        
//         // Hash table for storing characters and count dublicates
//         std::map<char, int> charactersOfSubstr;       
        
//         // Longest sequence that will be returned in the end
//         int longest = 0;
//         int j = 0;
        
//         // Each character from string add to HashTable: for dublicates increase value that used in result calculation
//         for (int i = 0; i < s.length(); ++i)
//         {
//             // Try to find character in the HashTable
//             // If current character already exist in the HashTable - increment value
//             if ( charactersOfSubstr.find(s[i]) != charactersOfSubstr.end() )
//             {
//                 charactersOfSubstr.find(s[i])->second++;
//             }
//             // Othervise add it to HashTable
//             else
//             {
//                 charactersOfSubstr.insert(pair<char, int>(s[i], 1));
//             }
            
//             // ONLY if in HashTable exist several same characters:
//             // decrease ALL characters between j and i in HashTable AND increase j for calculation while s[i] value in Hash table > 1
//             while ( charactersOfSubstr.find(s[i])->second > 1 )
//             {
//                 // Descrease value of existing character
//                 charactersOfSubstr.find(s[j])->second--;
//                 // Increase j for future calculation
//                 ++j;
//             }
            
//             // longest will be chosen between larger value: old longest OR current sequance (i - j + 1)
//             longest = longest >= i - j + 1 ? longest : i - j + 1;
//         }
        
//         return longest;
//     }
// };
    
    
    
    
    
    
    
    

    
    
    
    
    
    
};