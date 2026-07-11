// Last updated: 7/11/2026, 10:15:07 PM
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
8 * };
9 */
10class Solution {
11public:
12    void traverse(TreeNode*root,map<TreeNode*,TreeNode*>&parent)
13    {
14        if(root==NULL) return;
15        if(root->left!=NULL)
16        parent[root->left]=root;
17        if(root->right!=NULL) parent[root->right]=root;
18        traverse(root->left,parent);
19        traverse(root->right,parent);
20    }
21    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
22        map<TreeNode*,TreeNode*>parent;
23        parent[root]=NULL;
24        traverse(root,parent);
25        vector<TreeNode*>f,s;
26        TreeNode*tempp=p,*tempq=q;
27        while(parent[p]!=NULL)
28        f.push_back(p),p=parent[p];
29        while(parent[q]!=NULL)
30        s.push_back(q),q=parent[q];
31        reverse(f.begin(),f.end());
32        reverse(s.begin(),s.end());
33        unordered_set<TreeNode*>st;
34        while(tempp!=NULL)
35        {
36            st.insert(tempp);
37            tempp=parent[tempp];
38        }
39        while(tempq!=NULL)
40        {
41            if(st.count(tempq)) return tempq;
42            tempq=parent[tempq];
43        }
44        return p;
45
46        
47
48    }
49};