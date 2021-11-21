// https://leetcode.com/problems/swap-nodes-in-pairs

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
    ListNode* swapPairs(ListNode* head) { 
        if(head==nullptr||head->next==nullptr)
            return head;
        ListNode *cur=head;
            while(cur!=nullptr)
           {
            if(cur->next!=nullptr)
            {
              swap(cur->val,cur->next->val);
                cur=cur->next->next;
            }   
                else
                    break;
        }
        return head;
        
    }
};