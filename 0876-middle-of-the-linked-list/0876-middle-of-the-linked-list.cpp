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
    ListNode* middleNode(ListNode* head) {
        
        
        ListNode* temp=head;
        int count=0;
        while(temp){
            count++;
            temp=temp->next;
        }
        
        
        
        
        
        
//         class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         ListNode *temp = head;
//         int length=0;
// 				//Traversing temp till the end of linked list to find length #O(n)
//         while(temp){
//             length++;
//             temp = temp->next;
//         }
//         int middle = length/2;
//         temp=head;
//        //traversing temp node back to middle node #O(n/2)
//         while(temp && middle--)
//             temp=temp->next;
        
//         return temp;
//     }
// };
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
//         lass Solution {
// public:
//         ListNode* middleNode(ListNode* head) {
//         ListNode *slow = head, *fast = head;
//         while (fast && fast->next)
//             slow = slow->next, fast = fast->next->next;
//         return slow;
//     }
// };
        
        
        
        
        
        
        
        
        for(int i=0;i<count/2;i++){
            head=head->next;
            
            
        }
        
        return head;
        
        
        
        
        
        
        
    }
};