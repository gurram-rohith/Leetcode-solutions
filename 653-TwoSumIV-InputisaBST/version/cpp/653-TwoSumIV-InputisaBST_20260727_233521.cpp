// Last updated: 7/27/2026, 11:35:21 PM
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
12 class BSTIterator{
13    stack<TreeNode*>s;
14    bool reverse=true;
15    public:
16    BSTIterator(TreeNode*root,bool isreverse){
17        reverse=isreverse;
18        pushall(root);
19    }
20    int next(){
21        TreeNode*t=s.top();
22        s.pop();
23        if(reverse)
24        pushall(t->left);
25        else pushall(t->right);
26        return t->val;
27    }
28    private:
29    void pushall(TreeNode*root){
30        for(;root!=NULL;)
31        {
32            s.push(root);
33            if(!reverse)
34            root=root->left;
35            else root=root->right;
36        }
37    }
38 };
39class Solution {
40public:
41    bool findTarget(TreeNode* root, int k) {
42        if(!root) return false;
43        BSTIterator l(root,false);
44        BSTIterator r(root,true);
45        int i=l.next();
46        int j=r.next();
47        while(i<j)
48        {
49            if(i+j==k) return true;
50            if(i+j<k) i=l.next();
51            else j=r.next();
52        }
53        return false;
54
55    }
56};