//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
    vector<vector<int>>v;
   sort(A,A+n);
   int l=0;int r=0;
    
   for(int i=0;i<n-1;i++){
     l=i+1;r=n-1;

	 while(l<r){
		 if(A[i]+A[r]+A[l]==X){
                   return true;
		 }
		 else if(A[i]+A[r]+A[l]>X)r--;
		 else if(A[i]+A[r]+A[l]<X)l++;
	    }    
   }

 return false;


    }

};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}

// } Driver Code Ends