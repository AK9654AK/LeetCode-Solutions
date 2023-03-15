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
    ListNode* removeElements(ListNode* head, int val) {      if(head==NULL)return head;
                                                       
     
         while(head &&head->val==val) {
    ListNode* newHead=head->next;
    delete head;
             head=newHead;
    
}
           ListNode *curr=head;
        while(curr&& curr->next){
            if(curr->next->val==val){
                ListNode *temp=curr->next;
                curr->next=curr->next->next;
                delete temp;
            }
            else curr=curr->next;
            
        }
        
        return head;
                                                      }
};