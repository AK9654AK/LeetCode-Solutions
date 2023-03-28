class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
       
    string temp = bitset<32>(n).to_string(); 
        reverse(temp.begin(), temp.end());

    uint32_t ans = 0;
    long long power = 1;

    for (int i = temp.size() - 1; i >= 0; i--) {
        ans += (temp[i] - '0') * power;
        power *= 2;
    }

    return ans;
        
        
        
        
//         vector<int> vec;
// string temp = to_string(n);

// for (int i = temp.size() - 1; i >= 0; i--) {
//     vec.push_back(temp[i] - '0'); // convert char to int
// }

// long long ans = 0;
// long long power = 1;

//         reverse(vec.begin(),vec.end());
        
// for (int i = vec.size() - 1; i > 0; i--) { // fixed loop condition
//     ans += vec[i] * power;
//     power *= 2;
// }

// return ans;
    }
        
};