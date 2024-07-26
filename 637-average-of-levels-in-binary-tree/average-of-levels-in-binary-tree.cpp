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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        queue<TreeNode*> que;
        que.push(root);

        while(!que.empty()){
            int size = que.size();
            int csize = size;
            double sum = 0;
            while(size--){
                auto top = que.front(); que.pop();
                if(top->left) que.push(top->left);
                if(top->right) que.push(top->right);
                
                sum += top->val;
                
            }

            ans.push_back(sum/csize);
        }

        return ans;
    }
};