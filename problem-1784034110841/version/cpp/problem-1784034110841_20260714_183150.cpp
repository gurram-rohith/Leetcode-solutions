// Last updated: 7/14/2026, 6:31:50 PM
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
21            vector<pair<TreeNode*,ll>>vpp;
22            while(!q.empty())
23            {
24                vpp.push_back(q.front());
25                q.pop();
26            }
27            ll minind=INT_MAX,maxind=INT_MIN;
28            for(int i=0;i<vpp.size();i++)
29            {
30                minind=min(minind,vpp[i].second);
31                maxind=max(maxind,vpp[i].second);
32            }
33            maxwidth=max(maxwidth,maxind-minind+1);
34            for(int i=0;i<vpp.size();i++)
35            {
36                if(vpp[i].first->left!=NULL) q.push({vpp[i].first->left,(vpp[i].second-minind)*2});
37                if(vpp[i].first->right!=NULL) q.push({vpp[i].first->right,(vpp[i].second-minind)*2+1});
38
39            }
40        }
41        return (int)maxwidth;
42    }
43};