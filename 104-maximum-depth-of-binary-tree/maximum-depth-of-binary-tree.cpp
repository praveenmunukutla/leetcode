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
    int depth;
public:
    Solution():depth(0) {}

    int maxDepth(TreeNode* root) {
        if(root == nullptr) return 0;
        maxDepthUtil(root, 1);
        return depth;
    }

    void maxDepthUtil(TreeNode* root, int cdepth){
        if(root == nullptr) return;

        depth = cdepth > depth ? cdepth : depth;
        maxDepthUtil(root->left, cdepth+1);
        maxDepthUtil(root->right, cdepth+1);
    }
};