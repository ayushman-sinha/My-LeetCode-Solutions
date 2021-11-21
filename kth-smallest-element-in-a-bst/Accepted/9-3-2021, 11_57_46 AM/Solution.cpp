// https://leetcode.com/problems/kth-smallest-element-in-a-bst

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
    int c=0;
    void calc(TreeNode *root,int &k)
    {
        
        
        if(root==nullptr)
            return;     
        calc(root->left,k);
        k--;
           if(k==0)
          c=root->val;           
        calc(root->right,k);
         
        
    }
    int kthSmallest(TreeNode* root, int k) {
        
        calc(root,k);
        return c;
    }
};