//{ Driver Code Starts
// A C++ program to print elements with count more than n/k

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) {
        
        int hash[1000000]={0};
        
        for(int i=0;i<n;i++){
            
            
            hash[arr[i]]++;
            
            
        }
        
        
        int count=0;
        for(int i=0;i<1000000;i++){
            
            if(hash[i]>n/k)count++;
        }
        
        
        
        
        
        
        return count;
        
    }
};


//{ Driver Code Starts.
int main() {
    int t, k;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;

        int arr[n];

        for (i = 0; i < n; i++) cin >> arr[i];
        cin >> k;
        Solution obj;
        cout << obj.countOccurence(arr, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends