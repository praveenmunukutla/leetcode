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
    bool isCousins(TreeNode* root, int x, int y) {
        queue<pair<TreeNode*, TreeNode*>> q;
        q.push({root, nullptr});

        while(!q.empty()){
            int size = q.size();
            unordered_map<int, TreeNode*> umap;
            while(size--){
                auto qv = q.front(); q.pop();
                if(qv.first->val == x || qv.first->val == y) 
                    umap[qv.first->val] = qv.second;

                if(qv.first->left){
                   q.push({qv.first->left, qv.first});
                }
                if(qv.first->right){
                    q.push({qv.first->right, qv.first});
                }
            }

            if(umap.size() == 2){
                if(umap[x] != umap[y]) return true;
            }
        }

        return false;        
    }
};