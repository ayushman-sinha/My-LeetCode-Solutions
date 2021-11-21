// https://leetcode.com/problems/path-sum-ii

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
    vector<vector<int>>anus;
    void calc(TreeNode *root,vector<int>tmp,int k,int sum1)
    {
        if(root==nullptr)
            return;
        sum1+=root->val;     
        tmp.push_back(root->val);
        calc(root->left,tmp,k,sum1);
        calc(root->right,tmp,k,sum1);
        if(root->left==nullptr&&root->right==nullptr)//To check whether the given node is a leaf node or not
        {
            if(sum1==k)//if the sum of all nodes from root to leaf note is equal to target sum
                anus.push_back(tmp);
        }
        
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>tmp;
        calc(root,tmp,targetSum,0);
        return anus;
    }
};