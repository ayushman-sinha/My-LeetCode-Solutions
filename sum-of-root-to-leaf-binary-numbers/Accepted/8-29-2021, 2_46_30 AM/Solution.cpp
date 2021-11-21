// https://leetcode.com/problems/sum-of-root-to-leaf-binary-numbers

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
   int res;
    int add(vector<int>s)
    {
        int c=0;int k=0;
        while(!s.empty())
        {
            k=k+(s.back()*pow(2,c));
            c++;
            s.pop_back();
        }
        return k;
    }
    void calc(TreeNode *root,vector<int>s,int c)
    {
        //int s=0;
         if(root==nullptr)
             return;
       // cout<<root->val<<" ";
       s.push_back(root->val);
        calc(root->left,s,c);
         calc(root->right,s,c);
     // cout<<s<<" ";
        if(root->left==nullptr&&root->right==nullptr)
        {
          int m=add(s);
        res=res+m;
        }
             
        
    }
    int sumRootToLeaf(TreeNode* root) {
        vector<int>s;
        calc(root,s,0);
        return res;
        
    }
};