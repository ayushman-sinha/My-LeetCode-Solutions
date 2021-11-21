// https://leetcode.com/problems/average-of-levels-in-binary-tree

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
    vector<double> averageOfLevels(TreeNode* root) {
   
        queue <TreeNode*>q;
        vector<double>ans;
        q.push(root);
        while(!q.empty())
        {
            int siz=q.size();
            int nod=0;
            long long int sum=0;
            while(siz--)
            {
                TreeNode *temp=q.front();
                q.pop();
                sum+=temp->val;
                nod++;
                if(temp->left)
                    q.push(temp->left);
                 if(temp->right)
                    q.push(temp->right);
            }
            ans.push_back((double)sum/nod);
        }
        return ans;
        
    }
};