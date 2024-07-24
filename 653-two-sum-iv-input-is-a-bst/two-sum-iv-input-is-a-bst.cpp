class Solution {
    std::unordered_set<int> uset; // Set to store the values of nodes we have seen
public:
    // Main function to find if there exist two elements in the BST that add up to k
    bool findTarget(TreeNode* root, int k) {
        return findTargetUtil(root, k);        
    }

    // Helper function to perform DFS and check for the target sum
    bool findTargetUtil(TreeNode* root, int k){
        if (root == nullptr) {
            return false; // Base case: if the current node is null, return false
        }

        // Check if there exists a value in the set such that (current node value + that value) equals k
        if (uset.count(k - root->val)) {
            return true; // If such a value is found, return true
        }

        // Insert the current node's value into the set
        uset.insert(root->val);

        // Recursively check the left and right subtrees
        return findTargetUtil(root->left, k) || findTargetUtil(root->right, k);
    }
};
