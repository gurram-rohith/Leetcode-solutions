// Last updated: 4/5/2026, 12:14:53 AM
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
    bool hasCycle(ListNode *head) {
        while(head==NULL||head->next==NULL) return false;
         ListNode*slow=head,*fast=head->next;
        
         while(slow!=fast){
            if(fast->next==NULL||fast->next->next==NULL)
            return false;
            else
            {
                slow=slow->next;
                fast=fast->next->next;
            }
         }
         return true;
    }
};