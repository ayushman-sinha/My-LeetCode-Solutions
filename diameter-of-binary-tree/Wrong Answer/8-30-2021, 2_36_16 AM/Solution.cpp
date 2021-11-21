// https://leetcode.com/problems/diameter-of-binary-tree

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
     int c=0; vector<int>vec;
   void calc(TreeNode *root,int l)
    {
      
         if(root==nullptr)
            return;
        calc(root->left,l+1); 
     
        calc(root->right,l+1);
        if(root->left==nullptr&&root->right==nullptr)
        {
         vec.push_back(l);
        
        }
    }
    void disp()
    {
        for(int i=0;i<vec.size();i++)
        {
            cout<<vec[i]<<" ";
        }
        //sort(vec.begin(),vec.end());
        if(vec.size()==1)
            c=vec[0];
        else
            c=vec[0]+vec[vec.size()-1];
        
    }
    int diameterOfBinaryTree(TreeNode* root) {
        
        if(root==nullptr)
            return 0;
        calc(root,0);
        disp();
        return c;
    }
};