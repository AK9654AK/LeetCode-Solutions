class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        
        string word;
        sentence=sentence+" "; 
        vector<string>words;
        
        for(int i=0;i<sentence.size();i++)
        {
            if(sentence[i]!=' ')
            {
                word=word+sentence[i];
            }
            else
            {
                words.push_back(word);  //if it is a "space" that means complete sentence has been in the word.
                word="";
                
            }
                
        }
        
        int i=0;
        for(auto word:words)
        {
            i++; //counting the words.
            
            if(word.find(searchWord)==0)
            {
                    return i;//if it is true means the searchword was present at pos 0;
            }
        }
        return -1;
    
        
    }
};