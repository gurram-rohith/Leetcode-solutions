// Last updated: 6/15/2026, 3:02:53 PM
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
13    ListNode* deleteMiddle(ListNode* head) {
14        int n=0;
15        ListNode*temp=head;
16        while(temp!=NULL)
17        {
18            n++;
19            temp=temp->next;
20        }
21        n=n/2;
22        temp=head;
23        if(n==0) return NULL;
24        ListNode*prev;
25        while(n--)
26        {
27            prev=temp;
28            temp=temp->next;
29        }
30        if(temp->next!=NULL)
31        prev->next=(temp->next);
32        else prev->next=NULL;
33        temp->next=NULL;
34        return head;
35    }
36};