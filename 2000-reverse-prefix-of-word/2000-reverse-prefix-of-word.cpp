class Solution {
public:
    string reversePrefix(string word, char ch) {
        int size=word.size();
        int count=1;
        for(int i=0;i<size;i++){
            
            if(word[i]==ch){count=i+1;
            break;}
        }
        
        // if(count==size)count--;
        reverse(word.begin(),word.begin()+count);
        
        return word;
    }
};