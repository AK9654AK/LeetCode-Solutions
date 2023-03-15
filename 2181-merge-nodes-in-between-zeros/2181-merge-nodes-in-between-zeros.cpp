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
    ListNode* mergeNodes(ListNode* head) {
        
        ListNode *ans=new ListNode(0);  //new node
        ListNode *ptr=ans;        //which pts on new node
        ListNode *temp=head;
        
        temp=temp->next;    //since head is still a 0, so moved ahead;
        int sum=0;
        
        while(temp){
            while(temp->val!=0){
            sum+=temp->val;
            temp=temp->next;
        }
        
        ptr->next=new ListNode(sum);   //a new node is created 
        ptr=ptr->next;       //and ptr is pointing on it.
        temp=temp->next;       ///temp is on 0 now and hence it is moved ahead 
        sum=0;
    
    }
    return ans->next;  //since ans has value 0, we have to return non Zero.
}
};