class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       int index1=0;
int index2=0;
int med1=0;
int med2=0;

    int n=nums1.size();
    int m=nums2.size();
    
    int divide=(n+m)/2;
    
     for(int i=0;i<=divide;i++){
        med1=med2;
         
        if(index1==n){
            med2=nums2[index2];
            index2++;
        }
         
        else if(index2==m){
            med2=nums1[index1];
            index1++;
        }
         
        else if(nums1[index1]<nums2[index2]){
            med2=nums1[index1];
            index1++;
        }
         
        else{
            med2=nums2[index2];
            index2++;
        }
         
    }
    
    if((n+m)%2==0){
        return (float)(med1+med2)/2;
    }
    
    return med2;
 
    }
};