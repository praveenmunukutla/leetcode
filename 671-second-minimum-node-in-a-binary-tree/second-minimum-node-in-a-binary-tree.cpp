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
    unsigned int min = UINT_MAX ;
    unsigned int smin = UINT_MAX ;
public:
    int findSecondMinimumValue(TreeNode* root) {
        findSecondMinimumValueUtil(root);
        return smin == UINT_MAX  ? -1 : smin;
    }
    void findSecondMinimumValueUtil(TreeNode* root) {
        if(root == nullptr) return;

        if(root->val < min){
            smin = min;
            min = root->val;
        }else if(root->val > min && root->val < smin){
            smin = root->val;
        }

        findSecondMinimumValueUtil(root->left);
        findSecondMinimumValueUtil(root->right);
    }
};