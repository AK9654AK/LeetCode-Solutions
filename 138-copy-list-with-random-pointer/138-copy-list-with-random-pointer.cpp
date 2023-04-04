/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:

    Node* copyRandomList(Node* head) {
        Node* curr = head;
        while(curr != nullptr){
            // Create curr's clone
            Node* currClone = new Node(curr->val);
            // Save curr's next because curr's next is going to be curr's clone
            Node* currNext = curr->next;
            curr->next = currClone;            
            // Curr's clone's next is now curr's old next
            currClone->next = currNext;   
            // Move curr forward
            curr = currNext;
        }
        curr = head;
        while(curr != nullptr){
			// If curr has a random pointer
            if(curr->random != NULL){
				// Set curr's clone's random as curr's random's clone
                curr->next->random = curr->random->next;
            }
			// Move curr forward
            curr = curr->next->next;
        }
        
        Node* ans = new Node(0);
        curr = head;
        Node* temp = ans;
        
        while(curr != NULL){            
            // add curr's clone to our ans linked list
            temp->next = curr->next;
            // Since our original list was modified, revert it by setting
            // curr's next to next as curr's next so that curr's next which
            // is curr's clone does not come in the list
            curr->next = curr->next->next;
            
            // Move temp forward
            temp = temp->next;
            // Move curr forward
            curr = curr->next;
        }
        
        return ans->next;

        
    }
};