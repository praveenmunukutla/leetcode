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
    int madiff = INT_MAX; // Variable to store the minimum absolute difference
    TreeNode* prev = nullptr; // Pointer to track the previous node in in-order traversal

public:
    int getMinimumDifference(TreeNode* root) {
        Util(root); // Start in-order traversal to compute the minimum difference
        return madiff; // Return the final computed minimum difference
    }

private:
    void Util(TreeNode* root) {
        if (!root) return; // Base case: If the current node is null, return
        
        // Traverse the left subtree
        Util(root->left);
        
        // Process the current node
        if (prev) { 
            // Update the minimum difference if previous node exists
            madiff = min(madiff, abs(prev->val - root->val));
        }
        // Update the previous node to the current node
        prev = root;
        
        // Traverse the right subtree
        Util(root->right);
    }
};
