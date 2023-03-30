class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
     
        
//          vector<string>ans;

// 	string x=words[0];
// 	ans.push_back(x);
// 	sort(x.begin(), x.end());
// 	for(int i=1;i<words.size();i++){
// 		string z=words[i];
// 		sort(z.begin(), z.end());
// 		if(x==z)
// 			continue;
// 		else{
// 			ans.push_back(words[i]);
// 			x=z;
// 		}

//         }
      
//         return ans;
        
        vector<string>abhi;
        
        string str1=words[0];
        
        abhi.push_back(str1);
        sort(str1.begin(),str1.end());
        
        for(int i=1;i<words.size();i++){
            string str2=words[i];
            sort(str2.begin(),str2.end());
            
            if(str1==str2)continue;
            else{
                abhi.push_back(words[i]);
                str1=str2;
            }
            // else continue;
        }
        
        
        return abhi;
        
        
    }
};