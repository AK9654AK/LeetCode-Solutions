class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        
        
        // sort(nums.begin(),nums.end());
        int i=0;
        int n=nums.size();
        for(int j=1;j<n;j++){
            
            if(nums[i]!=nums[j]){
                i++;
                nums[i]=nums[j];
            }

}
        }
        return i+1;
        
        
        
         
    }
};





//Here We can also do.        

//int removeDuplicates(vector<int>& nums){
	//nums.erase(unique(nums.begin() ,nums.end()),nums.end() ); 
	//return nums.size() ;


// another method to implement
// int count = 0;
// for(int i = 1; i < n; i++){
//     if(A[i] == A[i-1]) count++;
//     else A[i-count] = A[i];
// }
// return n-count;





