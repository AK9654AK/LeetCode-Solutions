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
    ListNode* deleteMiddle(ListNode* head) {
        
        if(head->next==NULL||head==NULL)return NULL;
        int len=0;
        ListNode *curr=head;
        
        while(curr){
            len++;
            curr=curr->next;
        }
        
        curr=head;
        ListNode *prev=NULL;
        
        for(int i=0;i<len/2;i++){
            prev=curr;
            curr=curr->next;
            
        }
            
        
        ListNode *temp=curr;
        
        prev->next=curr->next;
        
        delete(curr);
        
        
        return head;
    }
};