// Last updated: 7/19/2026, 11:47:59 PM
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
14    vector<int> preorderTraversal(TreeNode* root) {
15        vector<int>preorder;
16        TreeNode*curr=root;
17        while(curr)
18        {
19            if(curr->left==NULL)
20            {
21                preorder.push_back(curr->val);
22                curr=curr->right;
23            }
24            else
25            {
26                TreeNode*prev=curr->left;
27                while(prev->right&&prev->right!=curr) prev=prev->right;
28                if(prev->right==NULL)
29                {
30                    prev->right=curr;
31                    preorder.push_back(curr->val);
32                    curr=curr->left;
33                }
34                else
35                {
36                    prev->right=NULL;
37                    curr=curr->right;
38                }
39
40            }
41        }
42        return preorder;
43    }
44};