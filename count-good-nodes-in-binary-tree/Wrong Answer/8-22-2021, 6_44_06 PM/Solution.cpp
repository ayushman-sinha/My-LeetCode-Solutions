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
    int calculate(TreeNode *root,vector <int> &path,int pathlength)
    {
        
        if(root==nullptr)
            return 0;
        path.push_back(root->val);
        pathlength++;
        if((root->left==nullptr)&&(root->right==nullptr))//reached a leaf node
        {
            if(path[pathlength-1]>path[pathlength-2])
               count++; 
           
        }
        else
        {
            calculate(root->left,path,pathlength);
            calculate(root->right,path,pathlength);
        }
       return count;
        
    }
    int goodNodes(TreeNode* root) {
        if(root==nullptr)
            return 0;
        if(!root->left&&!root->right)
            return 1;
       
       vector <int> path;
  return(calculate(root,path,0)+1);
        
    }
};