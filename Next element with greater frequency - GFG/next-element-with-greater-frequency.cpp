//{ Driver Code Starts
#include <bits/stdc++.h>
#define N 10000
using namespace std;


// } Driver Code Ends
class Solution{
public:
    vector<int> print_next_greater_freq(int arr[],int n)
    {
        
    unordered_map<int, int> freq;
    
    for(int i=0; i<n; i++) freq[arr[i]]++;
    vector<int> abhi;
    
    
    stack<int> st;
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && freq[st.top()]<=freq[arr[i]]) {
            st.pop();
        }
        if(st.empty())
        abhi.push_back(-1);
        else abhi.push_back(st.top());
        
        st.push(arr[i]);
    
    }
    
    reverse(abhi.begin(),abhi.end());
        return abhi;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};


//{ Driver Code Starts.

int main()
{
    int arr[N];
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        for(int i=0; i<n; i++)
            cin>>arr[i];
        
        Solution ob;
        vector<int> ans=ob.print_next_greater_freq(arr,n);
        for(auto x:ans){
            cout<<x<<" ";
        }
        cout << endl;
    }
	return 1;
}

// } Driver Code Ends