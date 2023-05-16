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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        if(head==NULL)return head;
        
        ListNode* curr=head;
        ListNode* prev=head;
       while(n--)curr=curr->next;
        if(curr==NULL)return head->next;
        curr=curr->next;
        while(curr){prev=prev->next;curr=curr->next;}
        prev->next=prev->next->next;
        delete curr;
        return head;
    }
    
};