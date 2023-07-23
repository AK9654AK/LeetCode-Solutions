class Solution {
public:
    double knightProbability(int n, int k, int row, int column) {
        vector< pair<int, int> > offset{{-2,-1},{-2,1},{-1,-2},{-1,2},{1,-2},{1,2},{2,1},{2,-1}};
        vector< vector<float> > p0Matrix(n, vector<float>(n, 1.0)), p1Matrix(n, vector<float>(n));
        for(int step=0; step<k; step++){
            for(int r=0; r<n; r++)
                for(int c=0; c<n; c++){
                    float p = 0;
                    for(int i=0; i<8; i++){
                        pair<int, int> loc = {r+offset[i].first, c+offset[i].second};
                        if(loc.first>=0 && loc.first<n && loc.second>=0 && loc.second<n)
                            p += p0Matrix[loc.first][loc.second]*0.125;
                    }
                    p1Matrix[r][c] = p;
                }
            p0Matrix = p1Matrix;
        }
        return p0Matrix[row][column];
    }
};