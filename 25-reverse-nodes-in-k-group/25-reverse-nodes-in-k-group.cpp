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
    
    int length(ListNode *ptr){
        int len=0;
        while(ptr){
            len++;        // Function to calculate length
            ptr=ptr->next;
        }
        return len;
    }
    
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        if(head==NULL|| length(head)<k)return head;
        
        ListNode *curr=head;
        ListNode *prev=NULL;
        ListNode *next=NULL;
        int count=0;
        
        while(curr&& count<k){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;count++;
        }
        
        if(next) head->next=reverseKGroup(next,k);
        return prev;
        
    }
};