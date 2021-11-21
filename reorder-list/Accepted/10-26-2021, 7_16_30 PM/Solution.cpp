// https://leetcode.com/problems/reorder-list

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
    void reorderList(ListNode* head) {
        deque<int>dq;
        ListNode *cur=head;
        while(cur!=nullptr)
        {
           dq.push_front(cur->val);
            cur=cur->next;
        }
        int c=0;
        ListNode *tmp=head;
        while(!dq.empty())
        {
            if(c%2!=0)
            {
                tmp->val=dq.front();
                dq.pop_front();
            }
            else
            {
                tmp->val=dq.back();
                 dq.pop_back();
            }
            tmp=tmp->next;
            c++;            
        }
      
            
    }
};