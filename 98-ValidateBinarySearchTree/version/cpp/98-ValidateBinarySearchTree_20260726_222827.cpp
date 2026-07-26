// Last updated: 7/26/2026, 10:28:27 PM
1class Solution {
2public:
3    bool isValidBST(TreeNode* root) {
4        return valid(root, LONG_MIN, LONG_MAX);        
5    }
6
7private:
8    bool valid(TreeNode* node, long minimum, long maximum) {
9        if (!node) return true;
10
11        if (!(node->val > minimum && node->val < maximum)) return false;
12
13        return valid(node->left, minimum, node->val) && valid(node->right, node->val, maximum);
14    }    
15};