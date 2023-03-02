//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> firstAndLast(vector<int> &arr, int n, int x) {
        
        vector <int> abhi;
        for(int i=0;i<n;i++){
            if(arr[i]==x){
                abhi.push_back(i);
                break;
            }
        }
        
        for(int j=n-1;j>=0;j--){
            if(arr[j]==x){
                abhi.push_back(j);
                break;
            }
        }
        if(abhi.size()==0){
            abhi.push_back(-1);
            
        }
        return abhi;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> ans= obj.firstAndLast(arr, n, x) ;
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<< endl;
    }
    return 0;
}

// } Driver Code Ends