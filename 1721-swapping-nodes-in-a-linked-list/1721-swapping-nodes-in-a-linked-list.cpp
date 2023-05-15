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
    ListNode* swapNodes(ListNode* head, int k) {
       ListNode *size=head;
        int n=0;
        while(size){
            n++;
            size=size->next;
        }
        
        ListNode *curr=head;
        ListNode *curr1=head;
        for(int i=0;i<k-1;i++){
            curr=curr->next;
        }
        for(int i=0;i<n-k;i++){
            curr1=curr1->next;
        }
        
        int d1=curr->val;
        int d2=curr1->val;
        swap(curr->val,curr1->val);
        
    
    return head;
    }
};