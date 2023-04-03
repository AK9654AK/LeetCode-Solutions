class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        
        sort(people.begin(),people.end());
//         int count=0;int sum=0;int j=0;
//         for(int i=0;i<people.size()-1;i++){
//             if(people[i]+people[i+1]<=limit)count++;
//             }
        
//         return count;

        
        int i=0;int j=people.size()-1;
        int count=0;
        while(i<=j){
            
            if(people[i]+people[j]<=limit){i++;j--;}
            else if(people[i]+people[j]>limit)j--;
            count++;
        }
        return count;
    }
};