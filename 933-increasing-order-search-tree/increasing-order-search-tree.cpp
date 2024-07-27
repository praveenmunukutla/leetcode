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
    TreeNode* ans;
    TreeNode* tans;
public:
    TreeNode* increasingBST(TreeNode* root) {
        increasingBSTUtil(root);   
        return ans;
    }

    void increasingBSTUtil(TreeNode* root){
        if(root == nullptr) return;
        increasingBSTUtil(root->left);
        if(ans == nullptr){
            ans = new TreeNode(root->val);
            tans = ans;
        }else {
            tans->right = new TreeNode(root->val);
            tans = tans->right;
        }
        increasingBSTUtil(root->right);
    }
};