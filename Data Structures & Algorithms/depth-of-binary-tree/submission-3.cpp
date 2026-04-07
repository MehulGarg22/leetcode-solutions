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

    int maxheight(TreeNode* root, int &height){
        if(root==NULL) return 0;

        int left=maxheight(root->left, height);
        int right=maxheight(root->right, height);

        height=1+max(left, right);

        return height;
    }

    int maxDepth(TreeNode* root) {
        int height=0;
        return maxheight(root, height);
    }
};
