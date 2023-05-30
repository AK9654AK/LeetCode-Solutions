class Solution {
public:
    string sortString(string s) {
//        map<char, int> mp;
//     for (auto x : s)
//         mp[x]++;

//     std::string ans = "";
//     while (!mp.empty()) {
//         for (auto iter = mp.begin(); iter != mp.end();) {
//             auto& key = iter->first;
//             auto& value = iter->second;
//             if (value > 0) {
//                 ans += key;
//                 value--;
//             }
//             if (value == 0) {
//                 iter = mp.erase(iter);
//             } else {
//                 ++iter;
//             }
//         }

//         for (auto iter = mp.rbegin(); iter != mp.rend();) {
//             auto& key = iter->first;
//             auto& value = iter->second;
//             if (value > 0) {
//                 ans += key;
//                 value--;
//             }
//             if (value == 0) {
//                 iter = mp.erase(iter);
//             } else {
//                 ++iter;
//             }
//         }
//     }

//     return ans;
        
        int hash[26]={0};int count=0;
        for(auto x:s){hash[x-'a']++;count++;}
        string ans="";
        while(count){
            for(int i=0;i<26;i++){
                if(hash[i]>=1){
                    ans+=('a'+i);
                    count--;
                    hash[i]--;
                }
            }
            
            for(int i=25;i>=0;i--){
                 if(hash[i]>=1){
                    ans+=('a'+i);
                    hash[i]--;
                     count--;
                }
            }
            // count--;
        }
        
        return ans;
}
};