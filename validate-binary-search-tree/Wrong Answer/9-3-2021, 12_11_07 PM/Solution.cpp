// https://leetcode.com/problems/validate-binary-search-tree

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
    bool b;
    void calc(TreeNode *root)
    {
        
        if(root==nullptr)
            return;
       if(root->left&&root->right)
       {
           if(root->left->val<root->val&&root->right->val>root->val)
               b=true;
           else
           {
               b=false;
               return;
           }
       }
        calc(root->left);
        calc(root->right);
    }
    bool isValidBST(TreeNode* root) {
        if(root->left==nullptr&&root->right==nullptr)
            return true;
        calc(root);
        return b;
        
    }
};