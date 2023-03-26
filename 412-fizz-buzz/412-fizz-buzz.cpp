class Solution {
public:
    vector<string> fizzBuzz(int n) {
        
        
        vector<string>abhi;
        
        for(int i=1;i<=n;i++){
            
            if(i%3==0 and i%5==0)abhi.push_back("FizzBuzz");
             else if(i%3==0)abhi.push_back("Fizz");
             else if(i%5==0)abhi.push_back("Buzz");
             else {
                 string temp=to_string(i);
                 abhi.push_back(temp);
                 temp="";
                  }
        }
        return abhi;
        
        
        
        
    }
};