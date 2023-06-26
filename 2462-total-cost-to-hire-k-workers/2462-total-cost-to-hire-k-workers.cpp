class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
      priority_queue<int,vector<int>,greater<int>>p1,p2;
        long long ans=0;
        int count = 0;
        int i=0;int j=costs.size()-1;
        while(count<k)
        {
            while(p1.size()<candidates && i<=j)p1.push(costs[i++]);
            while(p2.size()<candidates && j>=i) p2.push(costs[j--]);
            int from_p1 = p1.size()>0?p1.top():INT_MAX;
            int from_p2 = p2.size()>0?p2.top():INT_MAX;
            if(from_p1<=from_p2)
            {
                ans+=from_p1;
                p1.pop();
            }
            else
            {
                ans+=from_p2;
                p2.pop();
            }
            count++;
        }
        return ans;  
       
    }
};