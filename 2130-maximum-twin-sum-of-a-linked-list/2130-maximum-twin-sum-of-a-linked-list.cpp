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
    int pairSum(ListNode* head) {
        ListNode*temp=head;
        int maxsum=0;
        int n=0;
        ListNode*prev;
        while(temp!=NULL)
        {
            n+=1;
            temp=temp->next;
        }
        n/=2;
        ListNode*curr,*succ;
        prev=head;
        curr=prev->next;
        succ=curr->next;
        if(succ==NULL) return prev->val+curr->val;
        n-=1;
        prev->next=NULL;
        while(n--)
        {
            curr->next=prev;
            prev=curr;
            curr=succ;
            succ=succ->next;
        }
        ListNode*t1=prev,*t2=curr;
        while(t2!=NULL&&t1!=NULL)
        {
        cout<<t1->val<<" "<<t2->val<<endl;
            maxsum=max(maxsum,t1->val+t2->val);
            t1=t1->next;
            t2=t2->next;
        }
        return maxsum;
        

    }
};