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
        
         ListNode* HEAD1;
    ListNode* HEAD2;
    HEAD1=head;
    HEAD2=head;
    for(int i=0;i<n;i++) //take pointer HEAD1 n places ahead of HEAD2
    {   
    HEAD1=HEAD1->next;
    if(!HEAD1)          // when we have to delete the first node
    return head->next;
    }  
    while(HEAD1->next)   //take HEAD1 to last node so that HEAD2 is 1 behind the       node we want to delete
     {   
    HEAD2=HEAD2->next;
    HEAD1=HEAD1->next;
    
     }
        
        ListNode* temp=HEAD2->next;
        
        
       HEAD2->next=HEAD2->next->next; // delete the node next to HEAD2

       delete(temp);
return head;
        
        
       
        
    }
    
    
    
    
    
    
    
    
    
    
};