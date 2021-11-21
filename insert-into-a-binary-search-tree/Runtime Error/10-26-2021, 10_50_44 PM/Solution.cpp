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
    TreeNode *tmp;
     TreeNode *prev;
    void calc(TreeNode *root,int val)
    {
     
        if(root==nullptr)
        {
            
           tmp =new TreeNode(val);
            tmp->left=nullptr;
            tmp->right=nullptr;
            if(val<prev->val)
                prev->left=tmp;
            else
                prev->right=tmp;            
               return; 
        }
       if(!root->left||!root->right)
           prev=root;
        if(root->val>val)
            calc(root->left,val);        
      
        if(root->val<val)     
            calc(root->right,val);
        
      
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