// https://leetcode.com/problems/increasing-order-search-tree

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
    vector<TreeNode*>bst;
    void calc(TreeNode *root)
    {
        if(root==nullptr)
            return;
        calc(root->left);
         TreeNode* newnode = new TreeNode(0);
        newnode->val = root->val;
        bst.push_back(newnode);
        calc(root->right);
        
    }

    TreeNode *form_bst()
    {
        TreeNode *new_root=nullptr;
       int i=0;
     
        for( i=0;i<bst.size()-1;i++)
        {
          
            bst[i]->right=bst[i+1];           
            
         }
        bst[i]->right=nullptr;

        return bst[0];
        
        
    }
    TreeNode* increasingBST(TreeNode* root) {
        calc(root);
        return(form_bst());
    }
};