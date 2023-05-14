
  int r;
bool comp(vector<int>& a, vector<int>& b)
{   
    return (a[r]>b[r]); 
}
class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
       // need to store k globally so can be used in comp function
        r=k;
       // used comparator function for sorting
        sort(score.begin(),score.end(),comp);
        return score;
    }
};
        // for(int i=0;i<score.size();i++)swap(score[i][k],score[i][0]);
        // sort(score.rbegin(),score.rend());
        // for(int i=0;i<score.size();i++)swap(score[i][k],score[i][0]);
        // return score;

