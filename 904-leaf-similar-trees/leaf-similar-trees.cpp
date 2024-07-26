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
        leafSimilarUtil(root1, leafnodes1);
        leafSimilarUtil(root2, leafnodes2);
        return leafnodes1 == leafnodes2;
    }
    void leafSimilarUtil(TreeNode* root, vector<int>& leafnode){
        if(root == nullptr) return;

        if(root->left == nullptr && root->right == nullptr) leafnode.push_back(root->val);
        leafSimilarUtil(root->left, leafnode);
        leafSimilarUtil(root->right, leafnode);
    }
};