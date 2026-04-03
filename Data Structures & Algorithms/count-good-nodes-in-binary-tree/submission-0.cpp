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
    int dfs(TreeNode* root, int maxSofar){
        int count=0;
        if(root==NULL) return 0;
        if(root->val>=maxSofar){
            count=1;
            maxSofar=root->val;
        }
        int left=dfs(root->left, maxSofar);
        int right=dfs(root->right, maxSofar);

        return count+left+right;
    }
    int goodNodes(TreeNode* root) {
        return dfs(root, root->val);
    }
};
