// Last updated: 7/28/2026, 8:06:33 PM
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
12 class Node{
13    public:
14    int maxnode,minnode,sum;
15    Node(int minnode,int maxnode,int sum)
16    {
17        this->maxnode=maxnode;
18        this->minnode=minnode;
19        this->sum=sum;
20    }
21 };
22class Solution {
23public:
24    int ans=0;
25    Node helper(TreeNode*root)
26    {
27        if(!root) return Node(INT_MAX,INT_MIN,0);
28        auto left=helper(root->left);
29        auto right=helper(root->right);
30        if(left.maxnode < root->val && right.minnode > root->val){
31            int curSum = left.sum + right.sum + root->val;
32            ans = max(ans,curSum);
33            return Node(min(root->val,left.minnode),max(root->val,right.maxnode),curSum);
34        }
35        return Node(INT_MIN,INT_MAX,0);
36    }
37    int maxSumBST(TreeNode* root) {
38        helper(root);
39        return ans;
40        
41    }
42};