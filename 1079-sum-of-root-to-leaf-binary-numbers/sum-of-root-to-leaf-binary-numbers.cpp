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
    int sumRootToLeaf(TreeNode* root) {
       util(root, 0);
       return sum;   
    }

    void util(TreeNode* root, int currSum){
        if(root == nullptr) return;

        if(root->left == nullptr && root->right == nullptr){
            currSum = currSum*2+root->val;
            sum += currSum;
            return;
        }

        currSum = currSum*2 + root->val;
        util(root->left, currSum);
        util(root->right, currSum);
    }
};