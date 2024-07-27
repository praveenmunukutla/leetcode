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
    int sum = 0;
public:
    int sumRootToLeaf(TreeNode* root) {
       util(root, "");
       return sum;   
    }

    int getDecimal(string ans){
        int sum = 0;
        for(auto c : ans)
            sum = sum * 2 + (c-'0');

        return sum;
    }

    void util(TreeNode* root, string ans){
        if(root == nullptr) return;

        if(root->left == nullptr && root->right == nullptr){
            ans += to_string(root->val);
            sum += getDecimal(ans);
            return;
        }

        ans += to_string(root->val);
        util(root->left, ans);
        util(root->right, ans);
    }
};