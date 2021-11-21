// https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer

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
    int getDecimalValue(ListNode* head) {
        long long int ans=0;
        ListNode *cur1=head;
        int c=0;
        ListNode *prev=nullptr;
        while(cur1!=nullptr)//Reversing the linked list
        {
            ListNode *tmp=cur1->next;
            cur1->next=prev;
            prev=cur1;
            cur1=tmp;
        }
         ListNode *cur=prev;
    
        while(cur!=nullptr)
        {
            ans=ans+(cur->val*(pow(2,c)));//generating the decomal equivalent
            c++;
            cur=cur->next;
        }
        return ans;
    }
};