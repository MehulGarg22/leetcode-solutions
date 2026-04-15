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

    bool findBST(TreeNode* root, int minV, int maxV){
        if(root==NULL) return true;

        if(root->val<=minV or root->val>=maxV) return false;

        bool left=findBST(root->left, minV, root->val);
        bool right=findBST(root->right, root->val, maxV);

        return left && right;
    }
    bool isValidBST(TreeNode* root) {
        return findBST (root, INT_MIN, INT_MAX);
    }
};
