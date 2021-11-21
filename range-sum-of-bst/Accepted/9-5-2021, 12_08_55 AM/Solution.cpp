// https://leetcode.com/problems/range-sum-of-bst

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
    vector<int>ar;
    void calc(TreeNode *root)
    {
        if(root==nullptr)
            return;
        calc(root->left);
        ar.push_back(root->val);
        calc(root->right);
    }
   int bin_ser(int a)
   {
       int low=0;
       int high=ar.size()-1;int ind=0;
       while(low<=high)
       {
           int mid=(low+high)/2;
           if(ar[mid]==a)
           {
               return mid;
           }
           else if(ar[mid]>a)
           {
               high=mid -1;
           }
           else if(ar[mid]<a)
           {
               low=mid +1;
           }
       }
       return 0;
   }
    
    int rangeSumBST(TreeNode* root, int low, int high) {
        calc(root);
        int a=bin_ser(low);
        int b=bin_ser(high);long long unsigned int sum=0;
        for(int i=a;i<=b;i++)
        {
            sum+=ar[i];
        }
        return sum;
    }
};