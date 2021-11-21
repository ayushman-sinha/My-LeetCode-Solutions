// https://leetcode.com/problems/remove-linked-list-elements

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
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head==nullptr)
            return nullptr;
        if(head->next==nullptr&&head->val==val)
            return nullptr;

         if(head->val==val)
             head=head->next;
                   ListNode *cur=head; 
        while(cur!=nullptr)
        {
            if(cur->next!=nullptr&&cur->next->val==val)
            {
                cur->next=cur->next->next;
            }
            cur=cur->next;
        }
        return head;
    }
};