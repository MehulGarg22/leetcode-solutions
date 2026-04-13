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

        queue<TreeNode*>q;
        vector<int>ans;
        if(root==NULL) return ans;
        q.push(root);
        while(!q.empty()){
            int qsize=q.size();
            while(qsize){
                TreeNode* first=q.front();
                q.pop();
                if(qsize==1){
                    ans.push_back(first->val);
                }
                if(first->left!=NULL){
                    q.push(first->left);
                }
                if(first->right!=NULL){
                    q.push(first->right);
                }
                qsize--;
            }
        }
        return ans;
    }
};
