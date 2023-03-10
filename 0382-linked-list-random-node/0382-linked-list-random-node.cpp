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
    int count=0;
    ListNode *ptr;
    Solution(ListNode* head) {
        
        ListNode* curr=head;
        // int count=0;
        while(curr){
            count++;
            curr=curr->next;
        }
    
        ptr=head;
        
        
    }
    
    int getRandom(){
        
        if(ptr==NULL)return NULL;
        

        int num=rand()%count;
    
        ListNode *temp=ptr;
        
        for(int i=0;i<num;i++){
            
            temp=temp->next;
            
        }
        return temp->val;
        
        
        
        
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */