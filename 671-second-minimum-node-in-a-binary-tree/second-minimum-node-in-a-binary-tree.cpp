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
    unsigned int min = UINT_MAX; // Initialize min to the largest possible unsigned integer value
    unsigned int smin = UINT_MAX; // Initialize smin to the largest possible unsigned integer value

public:
    int findSecondMinimumValue(TreeNode* root) {
        // Start the DFS traversal to find the second minimum value
        findSecondMinimumValueUtil(root);
        // Return -1 if smin is still UINT_MAX, indicating no second minimum was found
        return smin == UINT_MAX ? -1 : static_cast<int>(smin); // Convert smin to int for the return type
    }

    void findSecondMinimumValueUtil(TreeNode* root) {
        if (root == nullptr) return; // Base case: if the node is null, do nothing

        unsigned int val = root->val; // Get the value of the current node

        // Update min and smin based on the current node's value
        if (val < min) {
            smin = min; // Update smin to the old min value
            min = val;  // Update min to the current node's value
        } else if (val > min && val < smin) {
            smin = val; // Update smin to the current node's value
        }

        // Recursively traverse left and right subtrees
        findSecondMinimumValueUtil(root->left);
        findSecondMinimumValueUtil(root->right);
    }
};
