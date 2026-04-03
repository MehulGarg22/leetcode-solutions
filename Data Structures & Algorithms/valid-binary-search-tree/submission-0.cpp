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

    bool findValid (TreeNode* root, long minRange, long maxRange){
        if(root==NULL) return true;

        bool isValid=true;

        if(root->val<=minRange || root->val>= maxRange) return false;

        bool left=findValid(root->left, minRange, root->val);
        bool right=findValid(root->right, root->val, maxRange);

        return left && right;

    }
    bool isValidBST(TreeNode* root) {
        return findValid(root, LONG_MIN, LONG_MAX);
    }
};
