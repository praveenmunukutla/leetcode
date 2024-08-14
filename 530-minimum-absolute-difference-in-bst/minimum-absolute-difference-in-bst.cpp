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
    int madiff = INT_MAX;
    TreeNode* prev = nullptr;
public:
    int getMinimumDifference(TreeNode* root) {
        Util(root);
        return madiff;
    }
    void Util(TreeNode* root){
        if(!root) return;
        Util(root->left);
        if(!prev){
            prev = root;
        }else{
            madiff = min(madiff, abs(prev->val - root->val));
            prev = root;
        }
        Util(root->right);
    }
};