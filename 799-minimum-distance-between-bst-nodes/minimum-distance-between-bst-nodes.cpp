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
    int minDiff = INT_MAX;
    TreeNode* prev = nullptr;
public:
    int minDiffInBST(TreeNode* root) {
        minDiffInBSTUtil(root);
        return minDiff;
    }
    void minDiffInBSTUtil(TreeNode* root){
        if(root == nullptr) return;
        minDiffInBSTUtil(root->left);
        if(prev != nullptr) {
            minDiff = min(minDiff, root->val-prev->val);
        }
        prev = root;
        minDiffInBSTUtil(root->right);
    }
};