class Solution {
public:
   int minDeletions(string s) {
        map<char, int> mp;
        set<int> uniqueFreq;
        int c = 0;

        for (char ch : s) {
            mp[ch]++;
        }

        for (auto it : mp) {
            int freq = it.second;
            while (uniqueFreq.count(freq) > 0) {
                freq--;
                c++;
            }
            if (freq > 0) {
                uniqueFreq.insert(freq);
            }
        }

        return c;
    }
};