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
    int pairSum(ListNode* head) {
   
        
        
     
        ListNode *fast=head;
        ListNode *slow=head;
        
        
        while(fast && fast->next){
            fast=fast->next->next;
            slow=slow->next;
        }
        
        
        ListNode *prev=NULL;
        ListNode *temp;
        
        while(slow){
            
            temp=slow->next;
            slow->next=prev;
            prev=slow;
            slow=temp;
        
        
        }
    
        
        int maxi=0;
        
        while(prev){
            maxi=max(maxi,(head->val+prev->val));
            head=head->next;
            prev=prev->next;
        }
        
        
        return maxi;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
//         int sum;
//         ListNode *j=head;
        
//         while(j->next){
//             j=j->next;       /////Here j's next is NULL hence we cant use this, silly mistake tbh.
//         }
        
//         ListNode *i=head;
       
//      while(i<j){
         
//          sum=max(sum,(i->val+j->val));
//          i=i->next;
//          j=j->next;
//      }
        
        
//         return sum;
        
        
        
        
        
    }
};