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
    vector<string> ans;
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        binaryTreePathsUtil(root, "");
        return ans;
    }

    void binaryTreePathsUtil(TreeNode* root, string str) {
        if(root == nullptr) return;
        
        if(root->left == nullptr && root->right == nullptr){
            ans.push_back(str+to_string(root->val));
            return;
        }

        str += to_string(root->val)+"->";
        binaryTreePathsUtil(root->left, str);
        binaryTreePathsUtil(root->right, str);
    }
};