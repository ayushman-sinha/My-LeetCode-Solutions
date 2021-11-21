// https://leetcode.com/problems/symmetric-tree

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
    bool check_sym(TreeNode *left_sub,TreeNode *right_sub)
    {
        if(left_sub==nullptr&&right_sub==nullptr)
            return true;
       else if(left_sub!=nullptr&&right_sub!=nullptr)
        {
            if(left_sub->val==right_sub->val)
            {
            return(check_sym(left_sub->left,right_sub->right));
                return(check_sym(left_sub->right,right_sub->left));
                }
             
        }
               
        return false;
    }
    bool isSymmetric(TreeNode* root) {
        if(root==nullptr)
            return true;
        else
           return (check_sym(root->left,root->right));
    }
};