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
    int count=0;
    int findGood(TreeNode* root, int maxVal){
        if(root==NULL) return 0;
        if(maxVal<=root->val){
            count++;
            maxVal=max(maxVal, root->val);
        }
        int left=findGood(root->left, maxVal);
        int right=findGood(root->right, maxVal);
        return count+left+right;
    }

    int goodNodes(TreeNode* root) {
        int maxVal=INT_MIN;
         findGood(root, maxVal);
         return count;
    }
};
