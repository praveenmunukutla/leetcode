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
    // Function to merge two binary trees
    TreeNode* mergeTrees(TreeNode* a, TreeNode* b) {
        // If both trees are empty, return nullptr
        if (!a && !b) return nullptr;
        
        // If the first tree is empty, return the second tree
        if (!a) return b;
        
        // If the second tree is empty, return the first tree
        if (!b) return a;

        // Merge the values of the two nodes and update the value of the first node
        a->val += b->val;
        
        // Recursively merge the left children of both trees
        a->left = mergeTrees(a->left, b->left);
        
        // Recursively merge the right children of both trees
        a->right = mergeTrees(a->right, b->right);

        // Return the merged tree
        return a;
    }
};
