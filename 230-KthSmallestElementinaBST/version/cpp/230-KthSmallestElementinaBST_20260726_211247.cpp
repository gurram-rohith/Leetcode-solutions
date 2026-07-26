// Last updated: 7/26/2026, 9:12:47 PM
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
14    int kthSmallest(TreeNode* root, int k) {
15        int cnt=0;
16        int ans=0;
17        TreeNode*curr=root;
18        while(curr!=NULL)
19        {
20            if(curr->left==NULL)
21            {
22                cnt++;
23                if(cnt==k) ans= curr->val;
24                curr=curr->right;
25            }
26            else
27            {
28                TreeNode*prev=curr->left;
29                while(prev->right&&prev->right!=curr)
30                {
31                    prev=prev->right;
32                }
33                if(prev->right==NULL)
34                {
35                    prev->right=curr;
36                    curr=curr->left;
37                }
38                else
39                {
40                    prev->right=NULL;
41                    cnt++;
42                    if(cnt==k) ans= curr->val;
43                    curr=curr->right;
44                }
45            }
46        }
47        return ans;
48    }
49};