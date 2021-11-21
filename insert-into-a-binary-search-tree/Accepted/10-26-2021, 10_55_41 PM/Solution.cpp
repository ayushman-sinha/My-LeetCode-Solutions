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
  
     TreeNode *prev;
    void calc(TreeNode *root,int val)
    {
     
        if(root==nullptr)
        {
            
           TreeNode *tmp =new TreeNode(val);//creating a new node
            tmp->left=nullptr;
            tmp->right=nullptr;
            if(val<prev->val)//Linking new node to the required place according to the value of the previous node
                prev->left=tmp;
            else
                prev->right=tmp;            
               return; 
        }
       if(!root->left||!root->right)
           prev=root;//storing the previous node
        
        /*recursively moving to the required location
        Left subtree if element to be searched is smaller than root.
        Right subtree if element to be searched is greater than root*/
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
       if(!root)//if the BST is empty
       {
           TreeNode *tmp =new TreeNode(val);
            tmp->left=nullptr;
            tmp->right=nullptr;
           return tmp;
       }
            
        calc(root,val);
        return root;
    }
};