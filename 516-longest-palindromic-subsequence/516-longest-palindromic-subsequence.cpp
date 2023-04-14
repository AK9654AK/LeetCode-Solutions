class Solution {
public:
    int LCS(string A, string B, int m, int n) {
	int t[m+1][n+1];
	for(int i=0;i<=m;i++){
		for(int j=0;j<=n;j++){
			if(i==0 || j==0)
				t[i][j] = 0;
			else if(A[i-1]==B[j-1])
				t[i][j] = 1 + t[i-1][j-1]; 
			else
				t[i][j] = max(t[i-1][j],t[i][j-1]); 
		}
	}                      ///Same as LCS
        
	return t[m][n];
}
    
int longestPalindromeSubseq(string s) {
	string s2 = s;
	reverse(s2.begin(),s2.end());
	return LCS(s,s2, s.size(), s.size());
}
};