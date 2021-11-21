// https://leetcode.com/problems/intersection-of-two-linked-lists

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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if((headA==NULL)&&(headB==NULL))
            return NULL;
        if(headA==NULL)
            return headB;
        if(headB==NULL)
            return headA;
        ListNode *curA=headA;
        ListNode *curB=headB;
        int l1=0,l2=0;
        while(curA!=NULL)
        {          
          l1++;
            curA=curA->next;
        }
        while(curB!=NULL)
        {          
          l2++;
            curB=curB->next;
        }
        int d=abs(l1-l2);
        if(l1>l2)
        {
            while(d--)
            {
                headA=headA->next;
            }
        }
        else
        {
           while(d--)
            {
                headB=headB->next;
            } 
        }
        while(headA!=headB)
        {
            headA=headA->next;
             headB=headB->next;
        }
        return headA;

    }
};