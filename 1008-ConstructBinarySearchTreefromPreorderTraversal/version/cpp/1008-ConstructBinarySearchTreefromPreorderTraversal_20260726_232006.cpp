// Last updated: 7/26/2026, 11:20:06 PM
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
14    TreeNode*root;
15    void insertintobst(TreeNode*root,int ele)
16    {
17        if(root->val>ele)
18        {
19            if(root->left==NULL) {
20                root->left=new TreeNode(ele);
21                return;
22            }
23            else
24            insertintobst(root->left,ele);
25        }
26        else
27        {
28            if(root->right==NULL) {
29                root->right=new TreeNode(ele);
30
31                return;
32            }
33            else
34            insertintobst(root->right,ele);
35        }
36    }
37    TreeNode* bstFromPreorder(vector<int>& preorder) {
38        root=new TreeNode(preorder[0]);
39        root->left=NULL,root->right=NULL;
40        for(int i=1;i<preorder.size();i++) insertintobst(root,preorder[i]);
41        return root;
42
43    }
44};