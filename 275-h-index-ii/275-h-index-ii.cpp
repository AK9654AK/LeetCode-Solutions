class Solution {
public:
    int hIndex(vector<int>& citations) {
    int n=citations.size();
        int i=0;int j=citations.size()-1;
        
        while(i<=j){
            int mid=i+(j-i)/2;
            if(citations[mid]==n-mid)return n-mid;
            else if(citations[mid]>n-mid)j=mid-1;
            else if(citations[mid]<n-mid)i=mid+1;
            
        }
        return n-i;
    }
};