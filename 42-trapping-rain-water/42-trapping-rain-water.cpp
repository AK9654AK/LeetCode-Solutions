class Solution {
public:
     int trap(vector<int>& height) {
        int max_l = INT_MIN; 
        int max_r = INT_MIN;   // maximum on right side 
        int n = height.size();
        vector<int> left(n , 0);
        vector<int> right(n, 0);
        for(int i = 0; i< n; i++){
            if(max_l < height[i]) max_l = height[i];
            left[i] = max_l;      // finding maximum on left side for each index 
        }
        for(int i = n -1; i>= 0; i--){
            if(max_r < height[i]) max_r = height[i];
            right[i] = max_r;// finding maximum on left side for each index 
        }
        int ans = 0;
        for(int i = 0; i < n; i++){
            ans += abs(height[i] - min(left[i] , right[i]));// adding all the values(amount of water above each building 
        }
     return ans;
    }
};