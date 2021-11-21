// https://leetcode.com/problems/same-tree

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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if((p==nullptr)&&(q==nullptr))
            return true;
         if((p==nullptr)||(q==nullptr))
            return false;
        queue <TreeNode*> q1;
       vector <int> ar1;
        vector <int> ar2;
        q1.push(p);
        TreeNode *temp;
        while(!q1.empty())
        {
            temp=q1.front();
            q1.pop();
            ar1.push_back(temp->val);
           
            if(temp->left)
                q1.push(temp->left);
           if(!temp->left)
               ar1.push_back(-69);
             if(temp->right)
                q1.push(temp->right);
       if(!temp->right)
               ar1.push_back(-71);
        }
        q1.push(q);
        while(!q1.empty())
        {
           temp=q1.front();
            q1.pop();
            ar2.push_back(temp->val);
           
            if(temp->left)
                q1.push(temp->left);
            if(!temp->left)
               ar2.push_back(-69);
           
            if(temp->right)
                q1.push(temp->right);
            if(!temp->right)
               ar2.push_back(-71);
            
        }
        if(ar1.size()!=ar2.size())
            return false;
        for(int i=0;i<ar1.size();i++)
        {
            if(ar1[i]!=ar2[i])
                return false;
        }
        return true;
        }
        
    
};