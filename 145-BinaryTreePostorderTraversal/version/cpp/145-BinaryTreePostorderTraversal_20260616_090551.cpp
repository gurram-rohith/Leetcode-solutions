// Last updated: 6/16/2026, 9:05:51 AM
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
15        stack<TreeNode*>st;
16        vector<int>ans;
17        TreeNode*curr=root,*temp;
18        while(curr!=NULL||!st.empty())
19        {
20            if(curr!=NULL)
21            {
22                st.push(curr);
23                curr=curr->left;
24            }
25            else
26            {
27                temp=(st.top())->right;
28               if(temp==NULL)
29               {
30                temp=st.top();
31                st.pop();
32                ans.push_back(temp->val);
33                while(!st.empty()&&temp==st.top()->right)
34                {
35                    temp=st.top();
36                    st.pop();
37                    ans.push_back(temp->val);
38                }
39               }
40               else curr=temp;
41
42            }
43        }
44        return ans;
45    }
46};