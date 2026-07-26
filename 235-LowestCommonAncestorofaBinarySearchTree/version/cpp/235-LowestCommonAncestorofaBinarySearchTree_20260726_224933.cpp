// Last updated: 7/26/2026, 10:49:33 PM
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
8 * };
9 */
10
11class Solution {
12public:
13     map<TreeNode*,TreeNode*>parent;
14    void finparent(TreeNode*root)
15    {
16        if(root->left!=NULL) parent[root->left]=root,finparent(root->left);
17        if(root->right!=NULL) parent[root->right]=root,finparent(root->right);
18        
19    }
20    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
21        parent[root]=NULL;
22        finparent(root);
23        unordered_set<TreeNode*> vis;
24
25        while(p)
26        {
27            vis.insert(p);
28            p = parent[p];
29        }
30
31        while(q)
32        {
33            if(vis.count(q))
34                return q;
35            q = parent[q];
36        }
37
38        return NULL;
39
40
41    }
42};