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
    bool isIdentical(TreeNode* p, TreeNode* q){
        if(p==NULL && q==NULL) return true;
        if(p==NULL || q==NULL ||p->val!=q->val) return false;

        bool lh=isIdentical(p->left,q->left);
        bool rh=isIdentical(p->right,q->right);

        return lh && rh;
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        
        if(root==NULL || subRoot==NULL) return false;

        if(isIdentical(root,subRoot)) return true;

        bool lh=isIdentical(root->left, subRoot);
        bool rh=isIdentical(root->right, subRoot);

        return lh || rh;
    }
};
