class Solution {
public:
    class DisjointSet{
public:
    vector<int> par, rank, size;
    DisjointSet(int n){
        par.resize(n + 1);
        rank.resize(n + 1, 0);
        size.resize(n + 1, 1);
        for (int i = 0; i < n + 1; i++)
            par[i] = i;
    }
    int findPar(int node){
        if (node == par[node])
            return node;
        return par[node] = findPar(par[node]);
    }
    void UnionbyRank(int u, int v){
        int par_u = findPar(u);
        int par_v = findPar(v);
        if (par_u == par_v)
            return;
        if (rank[par_u] < rank[par_v]){
            par[par_u] = par_v;
        }
        else if (rank[par_u] > rank[par_v]){
            par[par_v] = par_u;
        }
        else{
            par[par_v] = par_u;
            rank[par_u]++;
        }
    }
    void UnionbySize(int u, int v){
        int par_u = findPar(u);
        int par_v = findPar(v);
        if (par_u == par_v)
            return;
        if (size[par_u] < size[par_v]){
            par[par_u] = par_v;
            size[par_v] += size[par_u];
        }
        else{
            par[par_v] = par_u;
            size[par_u] += size[par_v];
        }
    }
};
    bool samegroup(string a,string b){
        int count = 0;
        for(int i = 0 ; i < a.size() ; i++ ){
            if(a[i] != b[i])
                ++count;
        }
        return count <= 2;
    }
    int numSimilarGroups(vector<string>& strs) {
        int n  = strs.size();
        DisjointSet ds(n);
        for(int i = 0 ; i < n ;i++){
            for(int j = i + 1; j< n ;j++){
                if(samegroup(strs[i],strs[j]))
                    ds.UnionbySize(i,j);
            }
        }
        int ans = 0;
        for(int i = 0 ; i< n ;i++){
            //count no of parents as parents = no of groups
            // 1 parent will lead 1 group
            if(ds.par[i] == i)
                ++ans;
        }
        return ans;
    }
};