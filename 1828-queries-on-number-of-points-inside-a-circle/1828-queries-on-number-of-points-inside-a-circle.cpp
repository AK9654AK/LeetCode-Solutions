class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int>res;
        int count,x2,y2,r2;
        for(int i=0;i<queries.size();i++)
        {
            count=0;
            for(int j=0;j<points.size();j++)
            {
                x2=pow((points[j][0]-queries[i][0]),2);
                y2=pow((points[j][1]-queries[i][1]),2);
                r2=pow(queries[i][2],2);
                if((x2+y2)<=r2)count++;
            }
            res.push_back(count);
        }
        return res;
 
    }
};