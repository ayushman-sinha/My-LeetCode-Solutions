// https://leetcode.com/problems/reverse-linked-list-ii

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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left==right)
            return head;
        int range=(right-left)+1;
        ListNode *cur=head;
        int left1=left;
        ListNode *pr=nullptr;
        while(left!=1)
        {
            pr=cur;
            cur=cur->next;
            left--;
         }
        
        ListNode *prev=nullptr;
       ListNode *current=cur;
        ListNode *tmp=cur;
        while(range--)
        {
            ListNode *temp=current->next;
            current->next=prev;
            prev=current;
            current=temp;
        }
       
      pr->next=prev;
       cur=pr;
       int c=0;
        while(cur!=nullptr)
        {
            if(c<right-1)
            {
            cur=cur->next;
            c++;
            }
            else
            {
                if(c==right-1)
                {
                    cur->next=current;
                    c++;
                }
                else
                {
                    cur=cur->next;
                }
            }
        }
      //  tmp=pr;
       
    //  prev=cur->next;
   
        
        return pr;
        
    }
};