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
    ListNode* removeElements(ListNode* head, int val) {     
        
        if(head==NULL)return NULL;
        ListNode *temp=head;
 while(temp->next!=NULL)
 {
     if(temp->next->val==val)
     {
         ListNode* todel=temp->next;
         temp->next=temp->next->next;
         delete todel;
     }
     else temp=temp->next;
 }
 
 if(head && head->val==val)
     return head->next;
 return head;
    }
};