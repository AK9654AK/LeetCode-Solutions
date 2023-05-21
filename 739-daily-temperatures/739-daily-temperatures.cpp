class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures){
       stack<int>a;
        int n=temperatures.size();
        vector<int>aa(n);
        
        for(int i=0;i<n;i++){
            while(!a.empty() and temperatures[a.top()]<temperatures[i]){
                aa[a.top()]=i-a.top();
                a.pop();
            }
            a.push(i);
            
        }
        
        return aa;
    }
};