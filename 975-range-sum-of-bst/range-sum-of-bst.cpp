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
    int sum = 0;
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        return rangeSumBSTUtil(root, low, high);
    }

    int rangeSumBSTUtil(TreeNode* root, int low, int high) {
        if(root == nullptr) return 0;

        if(low > root->val)
            return rangeSumBSTUtil(root->right, low, high);
        
        if(high < root->val)
            return rangeSumBSTUtil(root->left, low, high);
        
        return root->val + rangeSumBSTUtil(root->left, low, high) + rangeSumBSTUtil(root->right, low, high);
    }
};