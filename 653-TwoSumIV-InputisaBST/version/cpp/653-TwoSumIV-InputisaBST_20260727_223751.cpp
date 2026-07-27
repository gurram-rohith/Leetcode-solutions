// Last updated: 7/27/2026, 10:37:51 PM
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
14    bool findTarget(TreeNode* root, int k) {
15        vector<int>inorder;
16        TreeNode*curr=root;
17        while(curr)
18        {
19            if(curr->left==NULL)
20            {
21                inorder.push_back(curr->val);
22                curr=curr->right;
23            }
24            else
25            {
26                TreeNode*prev=curr->left;
27                while(prev->right&&prev->right!=curr) prev=prev->right;
28                if(prev->right==NULL)
29                prev->right=curr,curr=curr->left;
30                else {
31                    prev->right=NULL;
32                    inorder.push_back(curr->val);
33                    curr=curr->right;
34                }
35            }
36        }
37        unordered_map<int,int>mpp;
38        for(int i=0;i<inorder.size();i++)
39        {
40            if(mpp.find(k-inorder[i])!=mpp.end()) return true;
41            mpp[inorder[i]]++;
42        }
43        return false;
44    }
45};