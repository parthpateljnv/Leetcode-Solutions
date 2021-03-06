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
        
       
        ListNode *slow;
        ListNode *fast;
        ListNode *temp;
        slow=fast=head;
        
        for(int i=0;i<n;i++){
            
            if(fast->next == NULL){
                if(i==n-1){
                    temp = head;
                    head=head->next;
                    delete(temp);
                }
                    
                return head;    
            }
            
            fast = fast->next;
        }
        
        while(fast->next != NULL){
            fast= fast->next;
            slow= slow->next;
        }
        
        
        
        
        temp = slow->next;
        slow->next = temp->next;
        delete(temp);
        return head;
        
        
        
    }
};