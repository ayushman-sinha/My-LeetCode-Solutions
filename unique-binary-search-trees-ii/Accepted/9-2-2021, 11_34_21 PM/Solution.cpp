// https://leetcode.com/problems/unique-binary-search-trees-ii

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
    TreeNode *newNode(int item)
{
    TreeNode *temp = new TreeNode;
    temp->val = item;
    temp->left = temp->right = NULL;
    return temp;
}
    vector <TreeNode *>calc(int start,int end)
    {
        vector<TreeNode *>llist;
        if(start>end)
        {
            llist.push_back(nullptr);
            return llist;
        }
        for(int i=start;i<=end;i++)
        {
            vector<TreeNode *>lefts=calc(start,i-1);
            vector<TreeNode *>rights=calc(i+1,end);
            for(int j=0;j<lefts.size();j++)
            {
                TreeNode *left=lefts[j];
               for(int k=0;k<rights.size();k++)
               {
                   TreeNode *right=rights[k];
                   TreeNode *node=newNode(i);
                   node->left=left;
                   node->right=right;
                   llist.push_back(node);
               }
            }
        }
        return llist;
    }
    vector<TreeNode*> generateTrees(int n) {
        return (calc(1,n));
    }
};