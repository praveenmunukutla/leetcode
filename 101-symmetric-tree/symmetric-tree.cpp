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
    /**
     * Function to check if a binary tree is symmetric.
     * @param root The root node of the binary tree.
     * @return True if the tree is symmetric, otherwise false.
     */
    bool isSymmetric(TreeNode* root) {
        // A tree is symmetric if the left subtree is a mirror reflection of the right subtree.
        return isSymmetricUtil(root, root);
    }

private:
    /**
     * Helper function to check if two trees are mirror images of each other.
     * @param left The root of the left subtree.
     * @param right The root of the right subtree.
     * @return True if the subtrees are mirrors of each other, otherwise false.
     */
    bool isSymmetricUtil(TreeNode* left, TreeNode* right){
        // If both subtrees are empty, they are symmetric.
        if(left == nullptr && right == nullptr) return true;
        
        // If only one of the subtrees is empty, they are not symmetric.
        if(left != nullptr && right == nullptr) return false;
        if(left == nullptr && right != nullptr) return false;

        // Both subtrees must have the same root value and 
        // the left subtree of the left tree must be a mirror image of the right subtree of the right tree,
        // and the right subtree of the left tree must be a mirror image of the left subtree of the right tree.
        return (left->val == right->val) 
            && isSymmetricUtil(left->left, right->right) 
            && isSymmetricUtil(left->right, right->left);
    }
};
