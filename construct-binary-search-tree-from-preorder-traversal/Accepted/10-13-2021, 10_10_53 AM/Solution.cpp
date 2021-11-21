// https://leetcode.com/problems/construct-binary-search-tree-from-preorder-traversal

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
    TreeNode *newNode(int data)
    {
        TreeNode *tmp=new TreeNode(data);
        tmp->left=tmp->right=nullptr;
        return tmp;
    }
    TreeNode *calc(vector<int>&preorder,int *ind,int low,int high)
    {
        if(*ind>=preorder.size()||low>high)
            return nullptr;
    
        TreeNode *root=newNode(preorder[*ind]);
            *ind=*ind+1;
         if (low == high)
        return root;
        int i;
        for( i=low;i<=high;i++)
        {
            if(preorder[i]>root->val)
                break;
            }
            root->left=calc(preorder,ind,*ind,i-1);
            root->right=calc(preorder,ind,i,high);
          
        
          return root;
        
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int ind=0;
        return calc(preorder,&ind,0,preorder.size()-1);
    }
};