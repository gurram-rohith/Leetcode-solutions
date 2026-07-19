// Last updated: 7/19/2026, 11:02:31 PM
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
14    vector<int> inorderTraversal(TreeNode* root) {
15        vector<int>inorder;
16        TreeNode*curr=root;
17        while(curr!=NULL)
18        {
19            if(curr->left==NULL)
20            {
21                inorder.push_back(curr->val);
22                curr=curr->right;
23            }
24            else
25            {
26                TreeNode*prev=curr->left;
27                while(prev->right&&prev->right!=curr)
28                {
29                    prev=prev->right;
30                }
31                if(prev->right==NULL)
32                {
33                    prev->right=curr;
34                    curr=curr->left;
35                }
36                else
37                {
38                    prev->right=NULL;
39                    inorder.push_back(curr->val);
40                    curr=curr->right;
41                }
42            }
43        }
44        return inorder;
45    }
46};