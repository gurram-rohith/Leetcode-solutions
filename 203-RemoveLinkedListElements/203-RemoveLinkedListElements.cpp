// Last updated: 4/5/2026, 12:14:40 AM
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

    ListNode*returnHead(int val,ListNode*head,ListNode*prev,ListNode*temp){
         if(temp==NULL)
         return head;
         else
         {
            if(temp==head&&temp->val==val){
                head=head->next;
                temp->next=NULL;
                temp=head;
                prev=head;
            }
            else if(temp->val==val){
                prev->next=temp->next;
                temp->next=NULL;
                temp=prev->next;
            }
            else
            {
               prev=temp;
               temp=temp->next;
            }
            return returnHead(val,head,prev,temp);
         }
    }
    ListNode* removeElements(ListNode* head, int val) {
        ListNode*prev=head;
        ListNode*temp=head;
       return returnHead(val,head,prev,temp);

    }
};