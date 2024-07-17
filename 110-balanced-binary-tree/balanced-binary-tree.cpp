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
    bool isBalanced(TreeNode* root) {
        return isBalancedUtil(root);
    }

    bool isBalancedUtil(TreeNode* root){
        if(root == nullptr) return true;

        bool lBalance = isBalancedUtil(root->left);
        bool rBalance = isBalancedUtil(root->right);

        int lHeight = 0, rHeight = 0, absHeight = 0;
        getHeight(root->left, 1, lHeight);
        getHeight(root->right, 1, rHeight);
        absHeight = (lHeight > rHeight) ? lHeight - rHeight : rHeight - lHeight;

        return lBalance && rBalance && (absHeight <= 1);
    }

    void getHeight(TreeNode* root, int cDepth, int& depth){
        if(root == nullptr) return;

        depth = cDepth > depth ? cDepth : depth;
        getHeight(root->left, cDepth+1, depth);
        getHeight(root->right, cDepth+1, depth);
    }
};