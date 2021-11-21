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
    
    bool calc(TreeNode *root,long long int min,long long int max)
    {
       if(root==nullptr)
           return true;
        if(root->val<=min||root->val>=max)
        {
         
            return false;
        }
    
     return calc(root->left,min,root->val)&&
         calc(root->right,root->val,max);
        
    }

    
    bool isValidBST(TreeNode* root) {
        bool b;
        if(root->left==nullptr&&root->right==nullptr)
            return true;
        b=calc(root,LONG_MIN,LONG_MAX);
        return b;
        
    }
};