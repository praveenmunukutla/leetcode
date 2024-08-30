/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        return Util(original, cloned, target);
    }

    TreeNode* Util(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if(!original) return nullptr;

        if(original == target) return cloned;

        auto l = Util(original->left, cloned->left, target);
        if(l) return l;
        auto r = Util(original->right, cloned->right, target);
        if(r) return r;
        return nullptr;
    }
};