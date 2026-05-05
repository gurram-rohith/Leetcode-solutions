// Last updated: 5/5/2026, 7:54:41 PM
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* rotateRight(ListNode* head, int k) {
14        ListNode*temp=head;
15        if(head==NULL) return head;
16        int n=0;
17        ListNode*p=head;
18        while(temp!=NULL)
19        {
20            p=temp;
21            n++,temp=temp->next;
22        }
23        k%=n;
24        if(k==0) return head;
25        int c=n-k-1;
26        temp=head;
27        ListNode*prev=head;
28        while(c--)
29        {
30            prev=prev->next;
31        }
32        // cout<<prev->val<<endl;
33        cout<<p->val<<endl;
34        p->next=head;
35        head=prev->next;
36        prev->next=NULL;
37        return head;
38
39
40
41
42
43    }
44};