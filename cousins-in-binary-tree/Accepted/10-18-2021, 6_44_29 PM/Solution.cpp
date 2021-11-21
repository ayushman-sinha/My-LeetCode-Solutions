// https://leetcode.com/problems/cousins-in-binary-tree

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
    bool f=false;
    void calc(TreeNode *root,int x,int y)
    {
        
        if(root==nullptr)
            return;
        queue<TreeNode *>q;
        q.push(root);
        TreeNode *prev=root;
        while(!q.empty())
        {
            int size=q.size();
            bool b1=false;bool b2=false;
            while(size--)
            {
              TreeNode *tmp=q.front();
                //THis if-else statement is used to ensure that x and y value are not form same parent node
                if(prev->left!=nullptr&&prev->right!=nullptr)
                {
                    if((prev->left->val==x&&prev->right->val==y)||(prev->left->val==y&&prev->right->val==x))
                    {
                    f=false;
                    return;
                    }
                    
                }
                if(tmp->val==x)
                    b1=true;
                if(tmp->val==y)
                    b2=true;
                if(b1==true&&b2==true)
                    break;
                q.pop();
                if(tmp->left)
                    q.push(tmp->left);
                if(tmp->right)
                    q.push(tmp->right);
                prev=tmp;
            }
            if(b1==true&&b2==true)
            {
                f=true;
                return;
            }
        }
        f=false;
    }
    bool isCousins(TreeNode* root, int x, int y) {
        calc(root,x,y);
        return f;
    }
};