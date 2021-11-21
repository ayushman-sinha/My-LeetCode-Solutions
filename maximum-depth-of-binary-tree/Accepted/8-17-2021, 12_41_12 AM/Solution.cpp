// https://leetcode.com/problems/maximum-depth-of-binary-tree

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
  
    int maxDepth(TreeNode* root) {
        int lh,rh;
        if(root==nullptr)
            return 0;
        lh=maxDepth(root->left);
        rh=maxDepth(root->right);
        if(lh>rh)
            return lh+1;
        else
            return rh+1;
            
        
    }
};