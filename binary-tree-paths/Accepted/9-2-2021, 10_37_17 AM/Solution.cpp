// https://leetcode.com/problems/binary-tree-paths

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
    vector <string> ans;        
    void calc(TreeNode *root,string str)
    {       
        if(root==nullptr)
            return;  
       
       str=str+(to_string(root->val))+"->";
        calc(root->left,str);
        calc(root->right,str);
        if(root->left==nullptr&&root->right==nullptr)
        {
            int a=str.length()-2;
            str.erase(a,a+1);
        ans.push_back(str);
        }
       
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        string str;
     calc(root,str);
        return ans;
        
    }
};