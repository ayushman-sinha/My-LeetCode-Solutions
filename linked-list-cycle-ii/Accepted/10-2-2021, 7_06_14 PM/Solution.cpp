// https://leetcode.com/problems/linked-list-cycle-ii

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
    ListNode *detectCycle(ListNode *head) {
        ListNode *cur1=head,*cur2=head;
        ListNode *prev=nullptr;
        
        while(cur1&&cur2&&cur2->next)
        {
            prev=cur1;
            cur1=cur1->next;
            cur2=cur2->next->next;
          
            if(cur1==cur2)
            {
                cur1=head;
                while(cur1!=cur2)
                {
                    cur1=cur1->next;
                    cur2=cur2->next;
                }
                return cur1;
            }
        }
        return nullptr;
        
    }
};