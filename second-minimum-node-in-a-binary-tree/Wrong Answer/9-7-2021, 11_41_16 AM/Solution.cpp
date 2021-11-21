// https://leetcode.com/problems/second-minimum-node-in-a-binary-tree

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
    long int ans=0;
    long int k=LONG_MIN;
    bool b=false;
    void calc(TreeNode *root)
    {
        if(root==nullptr)
            return;
        calc(root->left);
         if(root->val>k&&c==1)
        {
            b=true;
            ans=root->val;            
            return;
        }
        if(root->val>k)
        {
            k=root->val;
            c++;
        }
       
        calc(root->right);
    }
    int findSecondMinimumValue(TreeNode* root) {
        calc(root);
        if(b==true)
        return ans;
        else
            return -1;
    }
};