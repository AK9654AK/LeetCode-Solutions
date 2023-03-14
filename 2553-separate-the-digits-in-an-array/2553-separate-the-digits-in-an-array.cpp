class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        
        vector<int>res,temp;
        
        for(int i=0;i<nums.size();i++){
            // string str=to_string(nums[i]);
            // int n=str.length();
             // for(int i=0;i<n/2;i++)swap(str[i],str[n-i-1]);
            // int num=stoi(str);    //??idk why is it taking 100 as 001?? (T_T)
            int num=nums[i];
            while(num){
                temp.push_back(num%10);
                num/=10;  
            }
            reverse(temp.begin(),temp.end());
            for(int i=0;i<temp.size();i++)res.push_back(temp[i]);            
            temp.clear();
        }
        return res;
        
        
        
        
        
        
       
        
        
        
        
        
        
        
        
        
        
        
        
    }
};