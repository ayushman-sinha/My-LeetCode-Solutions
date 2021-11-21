// https://leetcode.com/problems/count-good-nodes-in-binary-tree

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
   void calculate(TreeNode *root,int max1)
    {
         if(root==NULL)
            return;
        if(root->val>=max1)
           count++;
        
            calculate(root->left,max(max1,root->val));
            calculate(root->right,max(max1,root->val));
        
        
        
    }
    int goodNodes(TreeNode* root) {
        if(root==nullptr)
            return 0;
        if(!root->left&&!root->right)
            return 1;
       
     int max1=INT_MIN;
    calculate(root,max1);
        return count;
    }
};