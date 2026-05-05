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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode*temp=head;
        if(head==NULL) return head;
        int n=0;
        ListNode*p=head;
        while(temp!=NULL)
        {
            p=temp;
            n++,temp=temp->next;
        }
        k%=n;
        if(k==0) return head;
        int c=n-k-1;
        temp=head;
        ListNode*prev=head;
        while(c--)
        {
            prev=prev->next;
        }
        // cout<<prev->val<<endl;
        cout<<p->val<<endl;
        p->next=head;
        head=prev->next;
        prev->next=NULL;
        return head;





    }
};