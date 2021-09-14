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
    ListNode* deleteDuplicates(ListNode* head) {
        
        
        if(head ==NULL or head->next ==NULL){
            return head;
        }
        
        ListNode *dummy = new ListNode();
        ListNode *temp  = dummy;
        while(head!=NULL and head->next != NULL){
            if(head->val != head->next->val){
                temp->next = head;
                temp = temp->next;
            }
            else{
                while(head->next != NULL and head->val == head->next->val){
                    head= head->next;
                }
            } 
            head = head->next;
        } 
        
        temp->next = head;
        
        return dummy->next;
        
        
        
        
        
       
        /*
        ListNode dummy = new ListNode();
        ListNode temp = dummy;
        
        while(head != null && head.next != null) {
            if(head.val != head.next.val) {
                temp.next = head;
                temp = temp.next;
            } else {
                while(head.next != null && head.val == head.next.val) {
                    head = head.next;
                }
            }
            
            head = head.next;
        }
        
        temp.next = head;
        
        return dummy.next;
        */
        
        
        
        
    }
};