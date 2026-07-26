// Last updated: 7/26/2026, 10:48:47 PM
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
23        vector<TreeNode*>p1,p2;
24        map<int,int>forfinding;
25        while(parent[p]!=NULL)
26        {
27            p1.push_back(p);
28            forfinding[p->val]++;
29            p=parent[p];
30        }
31        while(parent[q]!=NULL)
32        {
33            p2.push_back(q);
34            q=parent[q];
35        }
36        for(int i=0;i<p2.size();i++)
37        {
38            if(forfinding.find(p2[i]->val)!=forfinding.end()) return p2[i];
39        }
40        return p;
41
42
43    }
44};