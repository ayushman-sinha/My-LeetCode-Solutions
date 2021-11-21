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
    int todec(long long int s)
    {
      int c=0,k=0;
        while(s!=0)
        {
            int a=s%10;
            k=k+(pow(2,c)*a);
            c++;
            s=s/10;
        }
        return k;
    }
    void calc(TreeNode *root,long long int s)
    {
        //int s=0;
         if(root==nullptr)
             return;
       // cout<<root->val<<" ";
        s=(s*10)+(root->val);
        calc(root->left,s);
         calc(root->right,s);
     // cout<<s<<" ";
        if(root->left==nullptr&&root->right==nullptr)
        {
        int m=todec(s);
        res=res+m;
        }
             
        
    }
    int sumRootToLeaf(TreeNode* root) {
        calc(root,0);
        return res;
        
    }
};