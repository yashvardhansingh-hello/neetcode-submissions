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
    TreeNode* invertTree(TreeNode* root) {
        if(root==nullptr) return root;
        queue<TreeNode*> access;
        access.push(root);
        while(!access.empty()) {
            TreeNode* temp = access.front();
            access.pop();
            TreeNode* swap = temp->left;
            temp->left = temp->right;
            temp->right = swap;
        
            if(temp->left) access.push(temp->left);
            if(temp->right) access.push(temp->right);
        }
        return root;
    }
};
