// https://leetcode.com/problems/flatten-binary-tree-to-linked-list

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
    vector<TreeNode *>ar;
    void calc(TreeNode *root)
    {
        if(root==nullptr)
            return;
        ar.push_back(root);
        calc(root->left);
        calc(root->right);
        
        
     }
    void flatten(TreeNode* root) {
        if(root==nullptr)
            return;
        calc(root);
        TreeNode *tmp1=nullptr,*tmp2=root;
        root=ar[0];
        for(int i=1;i<ar.size();i++)
        {
           root->right=ar[i];
            root->left=nullptr;
         root=root->right;
        }
       // tmp1->right=nullptr;
        //return tmp2;
    }
};