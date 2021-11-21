// https://leetcode.com/problems/path-sum-iii

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
    int count=0;
    void sumCalc(TreeNode *root,int target,int sum)
    {
        if(target==sum)
            count++;
        if(root->left)
            sumCalc(root->left,target,sum+root->left->val);
        if(root->right)
            sumCalc(root->right,target,sum+root->right->val);
    }
    void calc(TreeNode *root,int target)
    {
       if(!root)
           return;
        sumCalc(root,target,root->val);
        calc(root->left,target);
         calc(root->right,target);
            
    }
    int pathSum(TreeNode* root, int targetSum) {
       calc(root,targetSum);
        return count;
    }
};