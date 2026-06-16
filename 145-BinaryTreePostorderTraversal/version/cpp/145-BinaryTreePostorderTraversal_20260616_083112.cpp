// Last updated: 6/16/2026, 8:31:12 AM
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
14    vector<int> postorderTraversal(TreeNode* root) {
15        stack<TreeNode*>s1,s2;
16        s1.push(root);
17
18        if(root==NULL) return {};
19        while(!s1.empty())
20        {
21            s2.push(s1.top());
22            s1.pop();
23            if(s2.top()->left!=NULL) s1.push(s2.top()->left);
24            if(s2.top()->right!=NULL) s1.push(s2.top()->right);
25        }
26        vector<int>ans;
27        while(!s2.empty())
28        {
29            ans.push_back(s2.top()->val);
30            s2.pop();
31        }
32        return ans;
33
34    }
35};