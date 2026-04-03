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
    void Tree(TreeNode* root, vector<int> &v){
        
        if(root==NULL) return;
        v.push_back(root->val);
        Tree(root->right, v);
        return;
    }

    vector<int> rightSideView(TreeNode* root) {
        vector<int>v;
        Tree(root, v);
        return v;
    }
};
