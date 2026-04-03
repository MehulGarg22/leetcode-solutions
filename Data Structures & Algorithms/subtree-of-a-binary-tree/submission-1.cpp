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

    bool isSame(TreeNode* p, TreeNode* q){
        if(p==NULL && q==NULL) return true;

        if(p==NULL || q==NULL || q->val !=p->val) return false;

        bool lh=isSame(p->left, q->left);
        bool rh=isSame(p->right, q->right);

        return lh && rh ;

    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==NULL) return false;

        if(isSame(root, subRoot)) return true;

        bool lh=isSubtree(root->left, subRoot);
        bool rh=isSubtree(root->right, subRoot);

        return lh || rh;
    }
};
