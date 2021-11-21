// https://leetcode.com/problems/symmetric-tree

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
  
    bool isSymmetric(TreeNode* root) {
        if(root==nullptr)
            return true;
       if(root->left==nullptr&&root->right==nullptr)
           return true;
        queue <TreeNode *> q;
        q.push(root);
        q.push(root);
        TreeNode *lef;TreeNode*rig;
        while(!q.empty())
        {
            lef=q.front();
            q.pop();
            rig=q.front();
            q.pop();
            if(lef->val!=rig->val)
                return false;
           if(lef->left&&rig->right)
           {
               q.push(lef->left);
               q.push(rig->right);
           }
          else if(lef->left||rig->right)
                return false;
            if (lef->right&&rig->left)
            {
                q.push(lef->right);
                q.push(rig->left);
            }
            else if(lef->right||rig->left)
                return false;
        }
        return true;
    }
};