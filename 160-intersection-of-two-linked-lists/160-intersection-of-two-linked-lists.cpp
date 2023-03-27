/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    
        int c1=1;
        int c2=1;
        
        ListNode *curr1=headA;
        ListNode *curr2=headB;
        
        while(curr1){
            c1++;
            curr1=curr1->next;
        }
         while(curr2){
            c2++;
            curr2=curr2->next;
        }
        
        
        
        if(c2>c1){
            
            int diff=c2-c1;
            while(diff--){
                headB=headB->next;
            }
        }else{
            int diff=c1-c2;
            while(diff--){
                headA=headA->next;
            }
        }
        
        
        while(headA){
            
            if(headA==headB){
               
                ListNode *ans=headA;
                return ans;
            }
            else{
                headA=headA->next;
                headB=headB->next;
            }
        }
        
        return NULL;
        
        
        
        
        
        
        
    }
};