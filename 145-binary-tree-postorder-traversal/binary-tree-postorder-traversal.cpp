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
    vector<int> ans;
public:
     int speed = []() {
        ios::sync_with_stdio(false); // Disable synchronization with C I/O 
        cin.tie(NULL); // Untie cin from cout 
        cout.tie(NULL); // Untie cout (though this is not necessary) 
        return 0; 
    }(); 

    vector<int> postorderTraversal(TreeNode* root) {
        postorderTraversalUtil(root);
        return ans;
    }

    void postorderTraversalUtil(TreeNode* root){
        if(root == nullptr) return;

        postorderTraversalUtil(root->left);
        postorderTraversalUtil(root->right);
        ans.push_back(root->val);
    }
};