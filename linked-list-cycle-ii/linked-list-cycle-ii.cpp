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
    ListNode *detectCycle(ListNode *head) {
        
        
        
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast&&fast->next)
        {
             slow=slow->next;
             fast=fast->next->next;
            if(slow==fast)
            {   slow=head;   //initializing slow as head
                while(fast!=slow)
                {                                      //moving forward by one node instead of two for fast
                    fast=fast->next;
                    slow=slow->next;
                }
             return slow;
            }
        }
        return NULL;         
        /*
        ListNode *current = head;
        
        set<ListNode*> s;
        
        
        while(current!=NULL){
            if(s.count(current) ==0 ){
                s.insert(current);
            }
            
            else{
                return current;
            }
            
            current = current->next;
        }
        return NULL;*/
        
        
    }
};