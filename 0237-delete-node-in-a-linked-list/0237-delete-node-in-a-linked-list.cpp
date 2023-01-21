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
    void deleteNode(ListNode* node) {
     
        
        
         
//         //1st method
//         //we don't delete the node we move it forward
//         *node=*node->next; 
        
        
//         //2nd method;
//         //we copy the value of next varibale and move the pointer to next
//         node->val=node->next->val;
//         node->next=node->next->next;
        
//         //3rd method
//         //we copy the value of next varibale and move the pointer to next
//         //also remove the node so to escape memory leak
//         struct ListNode *temp=node->next;
//         node->val=node->next->val;
//         node->next=node->next->next;
//         delete temp;
        
        
        
        
        
        
        
        
        ListNode *temp=node->next;
        node->val=node->next->val;
        node->next=node->next->next;
        delete temp;
        
    }
};
