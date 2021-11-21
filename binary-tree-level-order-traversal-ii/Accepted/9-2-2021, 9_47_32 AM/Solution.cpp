// https://leetcode.com/problems/binary-tree-level-order-traversal-ii

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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
          vector<vector<int>>ar;
        if(root==nullptr)
            return ar;
        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty())
        {
          int siz=q.size();
            vector<int>temp;
            while(siz--)
            {
                TreeNode *tmp=q.front();
                q.pop();
                temp.push_back(tmp->val);
                if(tmp->left)
                    q.push(tmp->left);
                if(tmp->right)
                    q.push(tmp->right);
            }
            ar.push_back(temp);
            
        }
        reverse(ar.begin(),ar.end());
        return ar;
        
    }

};