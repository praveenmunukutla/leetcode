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
    int speed = []() {
        ios::sync_with_stdio(false); // Disable synchronization with C I/O
        cin.tie(NULL); // Untie cin from cout
        cout.tie(NULL); // Untie cout (though this is not necessary)
        return 0;
    }();

    /**
     * Function to check if there exists a path from the root to a leaf node
     * where the sum of node values equals the given target sum.
     * @param root The root node of the binary tree.
     * @param targetSum The target sum to be checked.
     * @return True if such a path exists, otherwise false.
     */
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == nullptr) return false; // If the root is null, return false

        // If it's a leaf node and the targetSum matches the node's value, return true
        if (root->left == nullptr && root->right == nullptr && targetSum == root->val) return true;

        // Recursively check the left and right subtrees for the remaining target sum
        return hasPathSum(root->left, targetSum - root->val) ||
               hasPathSum(root->right, targetSum - root->val);
    }
};
