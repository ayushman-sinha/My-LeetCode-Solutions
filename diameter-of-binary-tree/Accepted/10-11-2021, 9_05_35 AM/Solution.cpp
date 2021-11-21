// https://leetcode.com/problems/diameter-of-binary-tree


class Solution {
public:
    int height(TreeNode* root,int &res)
    {
        if(root==NULL)
            return 0;
        int lh=height(root->left,res);
        int rh=height(root->right,res);
        res=max(res,lh+rh);
        return max(lh,rh)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) 
    {
        int res=0;
        int h=height(root,res);
        return res;
    }
};