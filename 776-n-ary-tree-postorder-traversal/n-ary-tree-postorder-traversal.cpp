/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
    vector<int> ans;
public:
    vector<int> postorder(Node* root) {
        postOrderUtil(root);
        return ans;
    }
    void postOrderUtil(Node* root){
        if(root == nullptr) return;
        for(auto c : root->children)
            postOrderUtil(c);
        ans.push_back(root->val);
    }
};