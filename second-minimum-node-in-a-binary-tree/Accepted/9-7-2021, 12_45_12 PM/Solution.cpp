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
    
  vector<long int>ar;
    void calc(TreeNode *root)
    {
        if(root==nullptr)
            return;
         if(root!=nullptr)
             ar.push_back(root->val); 
        calc(root->left);             
        calc(root->right);
    }
    int ans()
    {
        sort(ar.begin(),ar.end());
        for(int i=0;i<ar.size()-1;i++)
        {
            cout<<ar[i]<<" ";
            if(ar[i]<ar[i+1])
                return ar[i+1];
        }
      //  cout<<"\n";
        return -1;
    }
    int findSecondMinimumValue(TreeNode* root) {
        calc(root);
        return(ans());
    }
};