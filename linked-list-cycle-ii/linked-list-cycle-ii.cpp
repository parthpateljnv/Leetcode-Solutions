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
        return NULL;
    }
};