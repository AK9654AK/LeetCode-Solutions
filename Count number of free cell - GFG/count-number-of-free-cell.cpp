//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++


class Solution{
  public:
  vector<long long int> countZero(int n, int k, vector<vector<int>>& arr){
      
      vector<int>row(n,0);
      vector<int>col(n,0);    
      int rc=0;   //coutn of row and column
      int cc=0;
      vector<long long int>abhi;
      
      for(int i=0;i<k; i++)
      {
          int r=arr[i][0]-1;            //0 based indexing thats why -1;
          
          int c=arr[i][1]-1;
          
          if(row[r]==0)
          {
              row[r]=1;
              rc++;
          }
          if(col[c]==0)
          {
              col[c]=1;
              cc++;
          }
          
          abhi.push_back(n*n-(rc*n)-(cc*n)+(rc*cc));
      }                 //Total-row-col  + delted more than 1 time hence added that wrongly deleted value;
      
      return abhi;
      
      
      
      
      
  }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<vector<int>> arr(k,vector<int>(2));
        for(int i=0;i<k;i++){
            int x, y;
            cin>>x>>y;
            arr[i][0] = x;
            arr[i][1] = y;
        }
        Solution ob;
        vector<long long int> ans = ob.countZero(n,k,arr);
        
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;    
    }
    
    return 0;
}


// } Driver Code Ends