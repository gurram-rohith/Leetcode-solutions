// Last updated: 7/14/2026, 6:39:53 PM
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
14    using ll=long long;
15    int widthOfBinaryTree(TreeNode* root) {
16        queue<pair<TreeNode*,ll>>q;
17        q.push({root,1});
18        ll maxwidth=1;
19        while(!q.empty())
20        {
21            int s=q.size();
22            ll minind=q.front().second;
23            ll firstind,lastind;
24            for(int i=0;i<s;i++)
25            {
26                ll curid=q.front().second-minind;
27                TreeNode* t=q.front().first;
28                q.pop();
29                if(t->left) q.push({t->left,(curid)*2});
30                if(t->right) q.push({t->right,(curid)*2+1});
31                if(i==0) firstind=curid;
32                if(i==s-1) lastind=curid;
33            }
34            maxwidth=max(maxwidth,lastind-firstind+1);
35
36        }
37        return (int)maxwidth;
38    }
39};