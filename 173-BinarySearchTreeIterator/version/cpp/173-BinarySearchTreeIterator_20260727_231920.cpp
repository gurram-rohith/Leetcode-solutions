// Last updated: 7/27/2026, 11:19:20 PM
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
12class BSTIterator {
13public:
14    stack<TreeNode*>s;
15    void pushall(TreeNode*root)
16    {
17        while(root)
18        {
19            s.push(root);
20            root=root->left;
21        }
22    }
23    BSTIterator(TreeNode* root) {
24        pushall(root);
25    }
26    
27    int next() {
28          TreeNode*t=s.top();
29            s.pop();
30            if(t->right) pushall(t->right);
31            return t->val;
32    }
33    bool hasNext() {
34        return (!s.empty());
35    }
36};
37
38/**
39 * Your BSTIterator object will be instantiated and called as such:
40 * BSTIterator* obj = new BSTIterator(root);
41 * int param_1 = obj->next();
42 * bool param_2 = obj->hasNext();
43 */