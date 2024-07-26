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
        vector<double> ans;          // To store the average of values at each level
        queue<TreeNode*> que;        // Queue for level order traversal
        que.push(root);              // Start with the root node

        // Continue while there are nodes to process
        while(!que.empty()){
            int size = que.size();   // Number of nodes at the current level
            int csize = size;        // Store the size for calculating average
            double sum = 0;          // Sum of values at the current level

            // Process each node at the current level
            while(size--){
                TreeNode* top = que.front();  // Get the front node in the queue
                que.pop();                    // Remove the front node from the queue

                // Add child nodes to the queue for the next level
                if(top->left) que.push(top->left);
                if(top->right) que.push(top->right);

                sum += top->val;  // Add the value of the current node to the sum
            }

            ans.push_back(sum / csize);  // Calculate and store the average for the current level
        }

        return ans;  // Return the vector containing the averages for each level
    }
};
