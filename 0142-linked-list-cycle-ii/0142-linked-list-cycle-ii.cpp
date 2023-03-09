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
    ListNode *detectCycle(ListNode *head) {
        
        // if(head==NULL)return NULL;
        // if(head->next==NULL)return NULL;
        
        ListNode *slow=head;
        ListNode *fast=head;
        
        // int count=1;
        
        while(fast  && fast->next){
            
            
            
            
            slow=slow->next;
            fast=fast->next->next;
            if(fast==slow)break;
        }
        
        if(!(fast && fast->next)) return NULL;
        
        
        // ListNode *curr=head;
        while(slow!=head){
            // count++;
            head=head->next;
            slow=slow->next;
        }
        
        
        return head;
    }
};
/////////////////////////////////////////////To do in O(1)//////////////////

      ListNode *fast = head, *slow = head;
while(fast != NULL && fast->next !=NULL){
fast = fast->next->next;
slow = slow->next;
if (fast == slow){slow = head;  //////   O(1) solution 
while (slow!=fast) {
    slow = slow->next;
    fast = fast->next;
}
return slow;
}                 
}
return NULL;
