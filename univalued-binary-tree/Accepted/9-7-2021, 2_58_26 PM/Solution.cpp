// https://leetcode.com/problems/univalued-binary-tree

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
    bool f=true;
    void calc(TreeNode *root,int k)
    {     
        if(root==nullptr)
            return;
        calc(root->left,k);
        if(root&&k!=root->val)
        {
            f= false;
            return;
        }
        calc(root->right,k);        
    }
    bool isUnivalTree(TreeNode* root) {
        if(root==nullptr)
            return true;            
        calc(root,root->val);
        return f;
    }
};