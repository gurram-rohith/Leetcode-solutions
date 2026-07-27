// Last updated: 7/27/2026, 10:44:34 PM
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void traverse(TreeNode* node, vector<int> &ans){
        if(node == nullptr){
            return;
        }
        traverse(node -> left, ans);
        ans.push_back(node -> val);
        traverse(node -> right, ans);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> inorder;
        traverse(root, inorder);
        unordered_map<int, int> m;
        for(int i = 0; i < inorder.size(); i++){
            if(m.find(k - inorder[i]) != m.end()){
                return true;
            }
            m[inorder[i]] = i;
        }
        return false;
    }
};