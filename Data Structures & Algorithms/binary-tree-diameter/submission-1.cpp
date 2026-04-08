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

    int maxDepth(TreeNode* root, int &height){
        if(root==NULL) return 0;

        int left=maxDepth(root->left, height);
        int right=maxDepth(root->right, height);

        height=max(left+right, height);
        return 1+max(left, right);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        int max=0;
        maxDepth(root, max);
        return max;
        
    }
};
