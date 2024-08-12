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
    queue<TreeNode*> que;
public:
    TreeNode* invertTree(TreeNode* root) {
        if(!root) return nullptr;

        que.push(root);

        while(!que.empty()){
           auto cnode = que.front(); que.pop();

           if(cnode->left){
                que.push(cnode->left);
           }
           if(cnode->right){
                que.push(cnode->right);
           }

           auto temp = cnode->right;
           cnode->right = cnode->left;
           cnode->left = temp;
        }

        return root;
    }
};