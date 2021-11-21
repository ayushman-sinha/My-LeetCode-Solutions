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
    bool calc(TreeNode *root,int min,int max)
    {
       if(root==nullptr)
           return true;
        if(root->val<min||root->val>max)
        {
         
            return false;
        }
        else if(root->right!=nullptr&&root->right->val<=root->val)
        {
            
            return false;
        }
     return (calc(root->left,min,root->val))&&(calc(root->right,root->val,max));
        
    }

    
    bool isValidBST(TreeNode* root) {
        if(root->left==nullptr&&root->right==nullptr)
            return true;
        b=calc(root,INT_MIN,INT_MAX);
        return b;
        
    }
};