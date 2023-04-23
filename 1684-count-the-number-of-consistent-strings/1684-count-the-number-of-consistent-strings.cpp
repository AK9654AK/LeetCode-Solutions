class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        
int mask=0;
int ans=0;
        
for (int i=0;i<allowed.size();i++) {
    mask|=(1<<(allowed[i]-'a'));
}
        
for (auto c:words){
    bool flag=true;
    for (auto x:c) {
        int count=mask&(1<<(x-'a'));
        if (count==0){
            flag=false;
            break;
        }
    }
    if(flag){
        ans++;
    }
}
        
return ans;

    }
};