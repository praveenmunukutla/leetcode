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
    vector<string> ans; // This will store all the paths from root to leaf nodes
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        binaryTreePathsUtil(root, ""); // Call the utility function to populate ans
        return ans; // Return the vector containing all the paths
    }

    void binaryTreePathsUtil(TreeNode* root, string str) {
        if(root == nullptr) return; // Base case: If root is null, return

        // If we reach a leaf node (both left and right children are null), add the path to ans
        if(root->left == nullptr && root->right == nullptr){
            ans.push_back(str + to_string(root->val));
            return;
        }

        // If not a leaf node, append the current node value to the path string
        str += to_string(root->val) + "->";

        // Recursively call for left and right children
        binaryTreePathsUtil(root->left, str);
        binaryTreePathsUtil(root->right, str);
    }
};
