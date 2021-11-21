// https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree

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
   
   TreeNode *calc(vector<int> &nums,int left,int right)
    {
       if(left>right)
           return nullptr;
        TreeNode *newNode=new TreeNode();
       if(left==right)
        {
          newNode->val=nums[left];
            newNode->left=nullptr;
            newNode->right=nullptr;            
        }
        else
        {
            int mid=(left+right)/2;
            newNode->val=nums[mid];
            newNode->left=calc(nums,left,mid-1);
            newNode->right=calc(nums,mid+1,right);         
            
        }
       return newNode;
       
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
       return calc(nums,0,nums.size()-1);
    }
};