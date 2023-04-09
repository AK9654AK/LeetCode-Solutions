class Solution {
public:
    int calPoints(vector<string>& operations) {
        
        stack<int> s;
        for(auto i:operations)
        {
            if(i!= "C" and i != "D" and i!= "+"){   //isdigit() not working
                
                s.push(stoi(i));
            }else if(i == "C"){
                s.pop();
            }else if(i== "D"){
                int cnt = s.top();
                s.push(cnt * 2);
            }else if(i == "+"){
                int cnt = s.top();
                s.pop();
                int cnt1 = s.top();
                s.push(cnt);
                s.push(cnt + cnt1);
            }
        }
        int sum=0;
        while(!s.empty()){
                          int num=s.top();
                          sum+=num;
                          s.pop();
                         }
        
        
        
        return sum;
    }
};