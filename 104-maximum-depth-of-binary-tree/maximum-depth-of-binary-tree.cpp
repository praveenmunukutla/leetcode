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
    int maxDepth(TreeNode* root) {
        // If the current node is null, the depth is 0
        if(root == nullptr) return 0;
        // The depth of the tree is the maximum depth of the left or right subtree plus one for the current node
        return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }
};