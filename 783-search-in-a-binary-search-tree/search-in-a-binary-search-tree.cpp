class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        return searchBSTUtil(root, val); // Pass value directly
    }
    
private:
    TreeNode* searchBSTUtil(TreeNode* root, int val) {
        if (root == nullptr) return nullptr; // Base case: reached a leaf node

        if (root->val == val) return root; // Found the node with the desired value

        if (val < root->val) 
            return searchBSTUtil(root->left, val); // Search in the left subtree

        return searchBSTUtil(root->right, val); // Search in the right subtree
    }
};
