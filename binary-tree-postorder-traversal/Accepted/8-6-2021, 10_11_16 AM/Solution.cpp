// https://leetcode.com/problems/binary-tree-postorder-traversal

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
    vector <int> ar1;
   void post(TreeNode *root)
    {
        if(root==nullptr)
            return;
        post( root->left);
            post( root->right);
       ar1.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        
       
        post(root);
        return ar1;
        
    }
};