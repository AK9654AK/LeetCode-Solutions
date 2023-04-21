class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        
       string arr[26]= {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    vector<string>v;
    for (auto c : words){
        string temp = "";
        for (int i=0;i<c.size();i++){
            temp+=arr[c[i]-'a'];
        }
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    return v.size();
    }
};