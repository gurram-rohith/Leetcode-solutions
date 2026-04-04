// Last updated: 4/5/2026, 12:15:12 AM
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
        if(head==NULL) return {};
        if(head->next==NULL) return head;
        ListNode*curr=head,*succ=head,*prev=head;
        curr=curr->next;
        succ=curr->next;
        while(curr!=NULL){
           if(curr->val==prev->val){
          prev->next=succ;
          curr->next=NULL;
          curr=succ;
          if(succ!=NULL)
          succ=succ->next;
           }
           else
           {prev=curr;
            curr=succ;
            if(succ!=NULL)
            succ=succ->next;
           }
        }
return head;
    }
};