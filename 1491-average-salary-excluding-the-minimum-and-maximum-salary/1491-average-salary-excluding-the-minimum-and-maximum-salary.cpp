class Solution {
public:
    double average(vector<int>& salary) {
        
        
        
         double sum=0;
        int n=salary.size()-2;
        
    sort(salary.begin(),salary.end());
        
        for(int i=1;i<=n;i++){
             sum=sum+salary[i];
        }
        
        return (double)(sum/n);
        
       // return  (salary[0]+salary[salary.size()-1]/2);  // I missed the word excluding LOL.
        
        
    }
};