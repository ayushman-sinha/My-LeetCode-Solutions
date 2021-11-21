// https://leetcode.com/problems/linked-list-in-binary-tree

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    bool compare(ListNode* head, TreeNode* root)
    {
        if(head!=nullptr&&root==nullptr)
         return false;
        if(head->val==root->val&&head->next==nullptr)
            return true;
        if(head->val==root->val)
        {
       return compare(head->next,root->left)||compare(head->next,root->right);
        }
        return false;
        
    }
 bool dfs(ListNode* head, TreeNode* root)
 {
     if(head!=nullptr&&root==nullptr)
         return false;
     if(compare(head,root))
         return true;
    return dfs(head,root->left)||dfs(head,root->right);
  
 }
    bool isSubPath(ListNode* head, TreeNode* root) {
       
      
        return dfs(head,root);
    }
};