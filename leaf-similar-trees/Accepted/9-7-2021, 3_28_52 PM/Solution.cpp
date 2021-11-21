// https://leetcode.com/problems/leaf-similar-trees

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
    vector<int>ar1;
        vector<int>ar2;
    void calc(TreeNode *root,int c)
    {
        if(root==nullptr)
            return;
        calc(root->left,c);
        if(root!=nullptr&&root->left==nullptr&&root->right==nullptr)
        {
            if(c==1)
                ar1.push_back(root->val);
            else
                ar2.push_back(root->val);
        }
        calc(root->right,c);
    }
    bool check()
    {
        if(ar1.size()!=ar2.size())
            return false;
        for(int i=0;i<ar1.size();i++)
        {
            if(ar1[i]!=ar2[i])
                return false;
        }
        return true;
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        
        
        calc(root1,1);
         calc(root2,2);
        return check();
    }
};