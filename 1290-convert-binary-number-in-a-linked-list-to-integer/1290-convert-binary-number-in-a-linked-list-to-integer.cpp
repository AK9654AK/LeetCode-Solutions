/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
//         if(head->val==0)return 0;
//         // if(head->val==NULL)return 0;        
        
//         long long num=0;
        
//         while(head){
//         num=num*10+head->val;
//             head=head->next;
//         }
//         // return num;
        
//         int ans=0;          ////////////////////////////////////Not Working anymore////////////////////////////////
        
//         string numb=to_string(num);
        
// //         for(int i=numb.length()-1;i>=0;i--){
// //         ans+=pow(2,numb.length()-1-i) * (numb[i] - '0');
        
//         for(int i=numb.length()-1;i>=0;i--){
//              // ans+=pow(2,(numb.length()-1-i));                   ///Not working 
//             ans+=pow(2,numb.length()-1-i) * (numb[i] - '0');
//         }
        
//         return ans;
        /////////////////////////////////////// Doubling Method?//////////////////////////////
        
        
        
        int ans=0;
        
        while(head){
            ans=ans*2+head->val;
            
            head=head->next;
        }
        
        return ans;
        
        
    
    }
};