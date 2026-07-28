// Last updated: 7/28/2026, 6:38:18 PM
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14    TreeNode*prev,*first,*second;
15    
16    void recoverTree(TreeNode* root) {
17        prev=NULL;
18        first=NULL,second=NULL;
19        TreeNode*curr=root;
20        while(curr)
21        {
22            if(curr->left==NULL)
23            {
24                  if(prev&&prev->val>curr->val)
25                   {
26                    if(first==NULL) first=prev;
27                    second=curr;
28                   }
29                prev=curr;
30                    curr=curr->right;
31            }
32            else{
33
34                TreeNode*p=curr->left;
35                while(p->right&&p->right!=curr) p=p->right;
36                if(p->right==NULL)
37                {
38                    p->right=curr;
39                    curr=curr->left;
40                    
41                }
42                else
43                {
44                    p->right=NULL;
45                   if(prev&&prev->val>curr->val)
46                   {
47                    if(first==NULL) first=prev;
48                    second=curr;
49                   }
50                   prev=curr;
51                    curr=curr->right;
52                }
53            }
54           
55        }
56        int temp=first->val;
57        first->val=second->val;
58        second->val=temp;
59    }
60};