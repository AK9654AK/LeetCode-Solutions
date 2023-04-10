class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        
//         stack<int>st;
//         int n=students.size();
            
//         for(int i=n-1;i>=0;i--){
//             st.push(sandwiches[i]);
//         }
          /// Here Queue will be used because we have to delete the elemetn from thhe array which requires whole shifting and stuff then queue operation will make it easy.
//         int count=0;
//         int i=0;
//         while(n>0){
//             if(st.top()==students[(i)%n]){
//                 count=0;
//                 n--;
//             }
//             else{ student[i]=INT_MIN;
//         }
        
//         return n-count;
        
        
        
        
        
        int c1=0;int c0=0;
        for(auto i:students){
            if(i==1)c1++;
            else c0++;
        }
        
        for(auto i:sandwiches){
            if(i==0){
                if(c0)c0--;
                else return c1;
            }
            else if(i==1){
                if(c1)c1--;
                else  return c0;
            }
        }
        
        return 0;
        
        
    }
};