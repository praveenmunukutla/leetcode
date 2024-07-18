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
    int countNodes(TreeNode* root) {
        if (!root) return 0;
        
        // Calculate the depth of the tree
        int depth = getDepth(root);
        
        // If the tree has only one level
        if (depth == 0) return 1;
        
        // Binary search to determine the number of nodes in the last level
        int left = 1;
        int right = (1 << depth) - 1; // 2^depth - 1
        int lastLevelCount = 0;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nodeExists(mid, depth, root)) {
                lastLevelCount = mid; // Update last level count to mid
                left = mid + 1; // Move to the right half
            } else {
                right = mid - 1; // Move to the left half
            }
        }
        
        // Total nodes = (2^depth - 1) + lastLevelCount + 1 (as lastLevelCount starts from 0)
        return (1 << depth) - 1 + lastLevelCount + 1;
    }

private:
    // Function to calculate the depth of the tree
    int getDepth(TreeNode* node) {
        int depth = 0;
        while (node->left) {
            depth++;
            node = node->left;
        }
        return depth;
    }
    
    // Function to determine if a node exists at index idx in the last level
    bool nodeExists(int idx, int depth, TreeNode* node) {
        int left = 0, right = (1 << depth) - 1; // 2^depth - 1
        
        for (int i = 0; i < depth; i++) {
            int mid = left + (right - left) / 2;
            if (idx <= mid) {
                node = node->left;
                right = mid;
            } else {
                node = node->right;
                left = mid + 1;
            }
        }
        return node != nullptr;
    }
};
