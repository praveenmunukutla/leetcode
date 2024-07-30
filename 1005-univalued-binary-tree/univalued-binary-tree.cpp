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
    int uval;
public:
    bool isUnivalTree(TreeNode* root) {
        uval = root->val;
        return isUnivalTreeUtil(root);
    }

    bool isUnivalTreeUtil(TreeNode* root){
        if(root == nullptr) return true;

        if(root->val != uval) return false;

        return isUnivalTreeUtil(root->left) && isUnivalTreeUtil(root->right);
    }
};