//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        
        // vector<int> abhi={0};
        
        if(s==0)return {-1};
        
       
        
        int i=0;int j=0;
        int sum=arr[0];
         if(sum==s)return {1,1};
        while(i<n-1){
            
            if(sum+arr[i+1]<=s){
                sum+=arr[i+1];
                i++;
            }                ////////////https://www.geeksforgeeks.org/videos/subarray-with-given-sum-xqthh4/
            else{
                sum-=arr[j];
                j++;
            }
            if(sum==s){
            return {j+1,i+1};
        }
        }
        return {-1};
        
        
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends