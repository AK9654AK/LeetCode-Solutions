class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>res;
        int j=0;
        for(int i=1;i<=n;i++){
            if(target[j]==i){res.push_back("Push");j++;}
            else{ res.push_back("Push");res.push_back("Pop");}
            if(j==target.size())break;
        }
        return res;
    }
};