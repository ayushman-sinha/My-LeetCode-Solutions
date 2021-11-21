// https://leetcode.com/problems/remove-nth-node-from-end-of-list

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==nullptr)
            return nullptr;
        ListNode *cur=head;int size=0;
        while(cur!=nullptr)
        {
            size++;
            cur=cur->next;
        }
        if(size==n)
            return head->next;
        ListNode *temp=head;
        for(int i=1;i<=size;i++)
        {
            if(i==size-n)
            {
                temp->next=temp->next->next;
                break;
            }
            temp=temp->next;
        }
        return head;
    }
};