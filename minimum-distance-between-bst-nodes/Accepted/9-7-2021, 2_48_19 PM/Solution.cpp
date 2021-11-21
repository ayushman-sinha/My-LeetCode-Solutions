// https://leetcode.com/problems/minimum-distance-between-bst-nodes

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
    vector <int>ar;
    void calc(TreeNode *root)
    {
        if(root==nullptr)
            return;
        calc(root->left);
        if(root!=nullptr)
            ar.push_back(root->val);
        calc(root->right);
    }
    int ans()
    {
        int dif=INT_MAX;
        for(int i=0;i<ar.size()-1;i++)
        {
            if(ar[i+1]-ar[i]<dif)
                dif=ar[i+1]-ar[i];
        }
        return dif;
    }
    int minDiffInBST(TreeNode* root) {
        calc(root);
        return ans();
    }
};