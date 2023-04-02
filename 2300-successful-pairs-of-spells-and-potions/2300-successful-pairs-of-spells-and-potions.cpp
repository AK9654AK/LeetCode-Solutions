class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {

        
 ////////////////////////////Binary Search//////////////////////////////////
        int spellsize=spells.size(),potsize=potions.size();
        vector<int>ans(spellsize);
        sort(potions.begin(),potions.end());
        int a,b;
        for(int i=0;i<spellsize;i++)
        {
            int spellStr=spells[i];
            a=0;
            b=potsize;
            while(a<b)
            {
                int mid=a+(b-a)/2;
                if(potions[mid]<(success+spellStr-1)/spellStr)a=mid+1;
                else b=mid;
            }
            ans[i]=potsize-a;
        }
        return ans;
    
        
        
        
        
        
        
        
        
        
        
        
        
        
///////////////////////////////////////TLE////////////////////////////////////////        
//         long long pos=potions.size();int j=0;long long count=0;vector<int>abhi;
//         for(int i=0;i<spells.size();i++){
//              j=0;
//             count=0;
//             while(j<pos){
//                 if(spells[i]*potions[j]>=success)count++;
//             }
//             abhi.push_back(count);
//         }
        
//         return abhi;
        
    }
};