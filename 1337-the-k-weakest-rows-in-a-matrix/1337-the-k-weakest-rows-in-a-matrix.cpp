class Solution
{
    static bool comparing(pair<int, int> a, pair<int, int> b)
    {
        return (a.second == b.second) ? a.first < b.first : a.second < b.second;
    }

public:
    vector<int> kWeakestRows(vector<vector<int>> &mat, int k)
    {
        unordered_map<int, int> mp;
        int r = mat.size();
        int c = mat[0].size();int i=0;
        for(auto x:mat)
        {
            int c=count(x.begin(),x.end(),1);
            mp.insert({i,c});
            i++;
        }
        vector<pair<int, int>> vec;
        for (const auto &i : mp)
            vec.push_back({i.first, i.second});
        sort(vec.begin(), vec.end(), comparing);
        vector<int> ans;
        for (int i = 0; i < k; ++i)
        {
            ans.push_back(vec[i].first);
        }
        return ans;
    }
};