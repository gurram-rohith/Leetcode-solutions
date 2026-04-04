// Last updated: 4/5/2026, 12:14:26 AM
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
    void deleteNode(ListNode* node) {
       ListNode*temp=node,*prev;
      int t1;
       while(temp->next!=NULL)
       {    if(temp->next!=NULL)
           { t1=temp->next->val;
            temp->next->val=temp->val;
            temp->val=t1;
            prev=temp;
            temp=temp->next;}
            else
            break;
       }
       prev->next=NULL;
    }
};