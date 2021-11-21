// https://leetcode.com/problems/linked-list-cycle

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
         ListNode *cur1=head;
           ListNode *cur2=head;
        while(cur1&&cur2&&cur2->next)
        {
           cur1=cur1->next;
            cur2=cur2->next->next;
            if(cur1==cur2)
                return true;
        }
        return false;
    }
};