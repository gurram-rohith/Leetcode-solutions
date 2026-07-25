// Last updated: 7/25/2026, 2:45:39 PM
1class Solution {
2public:
3    TreeNode* deleteNode(TreeNode* root, int key) {
4        if (root == NULL) return NULL;
5        
6        if (key < root->val) {
7            root->left = deleteNode(root->left, key);
8        } else if (key > root->val) {
9            root->right = deleteNode(root->right, key);
10        } else {
11            if (root->left == NULL) {
12                TreeNode* right = root->right;
13                delete root;
14                return right;
15            } else if (root->right == NULL) {
16                TreeNode* left = root->left;
17                delete root;
18                return left;
19            } else {
20                TreeNode* successor = root->right;
21                while (successor->left != NULL) successor = successor->left;
22                root->val = successor->val;
23                root->right = deleteNode(root->right, successor->val);
24            }
25        }
26        return root;
27    }
28};