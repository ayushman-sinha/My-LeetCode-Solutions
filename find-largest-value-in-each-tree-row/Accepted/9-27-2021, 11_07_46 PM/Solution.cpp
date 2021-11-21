// https://leetcode.com/problems/find-largest-value-in-each-tree-row

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
    vector<int> largestValues(TreeNode* root) {
        vector<int>ans;
        if(root==nullptr)
            return ans;
        queue<TreeNode *>q;
        q.push(root);
        
        while(!q.empty())
        {
             int size=q.size();
        
          long int max1=LONG_MIN;
            while(size--)
            {
                    TreeNode *tmp=q.front();
            q.pop();
             if(tmp->val>max1)
                 max1=tmp->val;
                if(tmp->left)
                    q.push(tmp->left);
                if(tmp->right)
                    q.push(tmp->right);
            }
            ans.push_back(max1);           
         }
        return ans;
    }
};