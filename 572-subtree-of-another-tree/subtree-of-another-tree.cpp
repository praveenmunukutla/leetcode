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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        string rootstr = "";
        string substr = "";
        inOrder(root,rootstr);
        inOrder(subRoot, substr);
        return rootstr.find(substr) != string::npos;
    }

    void inOrder(TreeNode* root, string& ans){
        if(root == nullptr){
            ans += "X";
            return;
        }

        ans += "$"+to_string(root->val)+"$";
        inOrder(root->left, ans);
        inOrder(root->right, ans);
    }
};