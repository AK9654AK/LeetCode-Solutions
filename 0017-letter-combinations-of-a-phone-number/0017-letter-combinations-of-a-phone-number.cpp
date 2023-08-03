class Solution {
public:
    void backtrack(unordered_map<char, string>& mp, string digits, int i, string curStr, vector<string>& resStr)
    {
        if (curStr.size() == digits.size())
        {
            resStr.push_back(curStr);
            return;
        }
        
        for (auto c: mp[digits[i]])
        {
            backtrack(mp, digits, i + 1, curStr + c, resStr);
        }
    }
    vector<string> letterCombinations(string digits) {
        if (digits.empty())
            return {};
        
        vector<string> resStr;
        unordered_map<char, string> mp = {
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}
        };

        backtrack(mp, digits, 0, "", resStr);
        return resStr;
    }
};