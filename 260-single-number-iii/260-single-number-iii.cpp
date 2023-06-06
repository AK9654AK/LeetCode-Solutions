class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
    int xorr = 0;
    for (int n : nums) xorr ^= n;
    unsigned int uxorr = static_cast<unsigned int>(xorr);
    int rightmostSetBit = xorr & -uxorr;
    vector<int> result = {0, 0};
    for (int n : nums) {
        if ((n & rightmostSetBit) == 0)
            result[0] ^= n;
        else
            result[1] ^= n;
    }
    return result;
}

};