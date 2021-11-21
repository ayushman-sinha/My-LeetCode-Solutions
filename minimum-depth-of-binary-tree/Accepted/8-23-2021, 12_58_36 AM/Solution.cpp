// https://leetcode.com/problems/minimum-depth-of-binary-tree

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
    int minDepth(TreeNode* root) {
      if(root==nullptr)
          return 0;
        return(calc(root));
      
        
    }
    int calc(TreeNode *root)
    {
          if(root==nullptr)
            return 10001;
         if(root->left==nullptr && root->right==nullptr) 
             return 1;
       int lheight=calc(root->left);
       int rheight=calc(root->right);
        return(1+min(lheight,rheight));
    }
};