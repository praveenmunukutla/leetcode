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
    unordered_map<int, int> umap;
    int maxval;
public:
    vector<int> findMode(TreeNode* root) {
        Util(root);
        vector<int> ans;
        for(auto u : umap){
            if(u.second == maxval)ans.push_back(u.first);
        }
        return ans;
    }
    
    void Util(TreeNode* root){
        if(!root)return;

        umap[root->val]++;
        maxval = max(maxval, umap[root->val]);
        Util(root->left);
        Util(root->right);
    }
};