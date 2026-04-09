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
    int depth(TreeNode* root, bool &flag){
        if(root==NULL){
            return 0;
        }
        int left=depth(root->left, flag);
        int right=depth(root->right, flag);

        if(left-right>1 || right-left>1) {
            flag= false;
        }

        return 1+max(left, right);

    }
    bool isBalanced(TreeNode* root) {
        bool flag=true;
        if(root==NULL) return true;
        depth(root, flag);
        return flag;
    }
};
