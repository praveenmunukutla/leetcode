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
    int depth; // Variable to store the maximum depth
public:
    Solution() : depth(0) {}

    /**
     * Function to find the maximum depth of a binary tree.
     * @param root The root node of the binary tree.
     * @return The maximum depth of the tree.
     */
    int maxDepth(TreeNode* root) {
        if(root == nullptr) return 0; // If the tree is empty, return 0
        maxDepthUtil(root, 1); // Start the depth calculation from the root with initial depth 1
        return depth; // Return the maximum depth found
    }

private:
    /**
     * Helper function to recursively find the maximum depth of the tree.
     * @param root The current node.
     * @param cdepth The current depth of the node.
     */
    void maxDepthUtil(TreeNode* root, int cdepth){
        if(root == nullptr) return; // If the current node is null, return

        // Update the maximum depth if the current depth is greater than the recorded maximum depth
        depth = cdepth > depth ? cdepth : depth;
        
        // Recursively find the depth of the left and right subtrees
        maxDepthUtil(root->left, cdepth + 1);
        maxDepthUtil(root->right, cdepth + 1);
    }
};
