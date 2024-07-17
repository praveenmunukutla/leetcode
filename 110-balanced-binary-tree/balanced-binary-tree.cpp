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
        return isBalancedUtil(root) != -1;
    }

    int isBalancedUtil(TreeNode* root){
        if(root == nullptr) return 0;

        int lHeight = isBalancedUtil(root->left);
        if(lHeight == -1) return -1;

        int rHeight = isBalancedUtil(root->right);
        if(rHeight == -1) return -1;

        int absHeight = (lHeight > rHeight) ? lHeight - rHeight : rHeight - lHeight;
        if(absHeight > 1) return -1;

        return 1+max(lHeight, rHeight);
    }
    
};