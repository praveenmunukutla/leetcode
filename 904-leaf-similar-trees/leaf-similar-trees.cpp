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
    vector<int> leafnodes1;
    vector<int> leafnodes2;
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        // Collect leaf nodes for both trees
        leafSimilarUtil(root1, leafnodes1);
        leafSimilarUtil(root2, leafnodes2);
        
        // Compare the leaf node sequences
        return leafnodes1 == leafnodes2;
    }
    
    void leafSimilarUtil(TreeNode* root, vector<int>& leafnode){
        if (root == nullptr) return;  // Base case: If the node is null, do nothing
        
        // Check if the current node is a leaf node
        if (root->left == nullptr && root->right == nullptr) {
            leafnode.push_back(root->val);  // Add leaf node value to the vector
        }
        
        // Recursively traverse the left and right children
        leafSimilarUtil(root->left, leafnode);
        leafSimilarUtil(root->right, leafnode);
    }
};
