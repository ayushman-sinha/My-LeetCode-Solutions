// https://leetcode.com/problems/insert-into-a-binary-search-tree

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
    void calc(TreeNode *root,int val)
    {
        if(!root)
        {
            TreeNode *root=new TreeNode(val);
        }
        
        /*
         cout<<prev->val<<"\n";
        cout<<root->val<<" ";
        */
       
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        calc(root,val);
        return root;
    }
};