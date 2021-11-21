// https://leetcode.com/problems/two-sum-iv-input-is-a-bst

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
    bool b=false;
    vector<int>ar;
    void calc(TreeNode *root,int k)
    {
        if (root==nullptr)
            return;
        calc(root->left,k);
        if(root->val<k&&root!=nullptr)
        ar.push_back(root->val);
        calc(root->right,k);
        
    }
    void sum_calc(int k)
    {
        int sum=0;int i=0;
       while(i<ar.size())
        {
           for(int j=i;j<ar.size();j++)
           {
               if(ar[i]+ar[j]==k)
               {
                   b=true;
                   break;
               }
           }
           i++;
           if(b==true)
               break;
        }
        
    }
    bool findTarget(TreeNode* root, int k) {
        calc(root,k);
        sum_calc(k);
        return b;
        
    }
};