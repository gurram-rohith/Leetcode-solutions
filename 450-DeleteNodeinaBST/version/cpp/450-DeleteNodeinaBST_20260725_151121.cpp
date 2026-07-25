// Last updated: 7/25/2026, 3:11:21 PM
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
14    TreeNode*lastrightnode(TreeNode*root)
15    {
16        if(root->right==NULL) return root;
17        return lastrightnode(root->right);
18    }
19    TreeNode*helper(TreeNode*root)
20    {
21        if(root->left==NULL) return root->right;
22        else if(root->right==NULL) return root->left;
23        TreeNode*rightchild=root->right;
24        TreeNode*lastrightchild=lastrightnode(root->left);
25        lastrightchild->right=rightchild;
26        return root->left;
27    }
28    TreeNode* deleteNode(TreeNode* root, int key) {
29        if(root==NULL) return root;
30        if(root->val==key)
31        {
32            return helper(root);
33        }
34        TreeNode*dummy=root;
35        while(root)
36        {
37            if(root->val>key)
38            {
39                if(root->left!=NULL&&root->left->val==key)
40                {
41                     root->left=helper(root->left);
42                }
43                else root=root->left;
44            }
45            else 
46            {
47                if(root->right!=NULL&&root->right->val==key)
48                {
49                     root->right=helper(root->right);
50                }
51                else root=root->right;
52            }
53
54        }
55        return dummy;
56    }
57};