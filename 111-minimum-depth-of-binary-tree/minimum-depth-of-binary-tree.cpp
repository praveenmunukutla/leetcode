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
    int ans = INT_MAX;
public:
    int minDepth(TreeNode* root) {
        if(root == nullptr) return 0;

        minDepthUtil(root, 1);
        return ans;
    }

    void minDepthUtil(TreeNode* root, int depth){
        if(root == nullptr) return;

        if(root->left == nullptr && root->right == nullptr)
          ans = depth < ans ? depth : ans;

        minDepthUtil(root->left, depth+1);
        minDepthUtil(root->right, depth+1);
    }
};