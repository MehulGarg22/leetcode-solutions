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
    vector<int> rightSideView(TreeNode* root) {
        vector<int>v;
        queue<TreeNode* >q;
        if(root==NULL) return v;
        q.push(root);
        while(!q.empty()){
            int qSize=q.size();
            while(qSize){
                TreeNode* front=q.front();
                q.pop();
                if(qSize==1){
                    v.push_back(front->val);
                }
                if(front->left!=NULL){
                    q.push(front->left);
                }
                if(front->right!=NULL){
                    q.push(front->right);
                }
                qSize--;
            }
        }
        return v;
    }
};
