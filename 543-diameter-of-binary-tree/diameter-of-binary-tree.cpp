class Solution {
    int diameter = 0;
public:
    int diameterOfBinaryTree(TreeNode* root) {
        depth(root);
        return diameter;
    }

    int depth(TreeNode* root){
        if (root == nullptr) return 0;

        int lh = depth(root->left);  // Get the depth of the left subtree
        int rh = depth(root->right); // Get the depth of the right subtree

        // Update the diameter to be the maximum of its current value and the path through the root
        diameter = max(diameter, lh + rh);

        // Return the height of the current node
        return 1 + max(lh, rh);
    }
};
