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
           ListNode *tmp1=nullptr,*tmp2=nullptr;
     
        while(cur!=nullptr&&cur->next!=nullptr)
        {
            if(tmp1!=nullptr)
                tmp1->next->next=cur->next;
           
            tmp1=cur->next;
            cur->next= cur->next->next;
            tmp1->next=cur;
           
            cur=cur->next;
            if(tmp2==nullptr)
                tmp2=tmp1;
         }
        return tmp2;
        
    }
};