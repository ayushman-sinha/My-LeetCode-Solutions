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
        
     
    
        ListNode *cur=head;
       
        ListNode *pr=head;
     
        int c=1;
        while(c<left)
        {
            pr=cur;
            cur=cur->next;
            c++;
         
         }
        
        ListNode *prev=nullptr;
      
       ListNode *res=head;
         ListNode *top=cur;
        while(c<=right)
        {
            ListNode *temp=cur->next;
            cur->next=prev;
            prev=cur;
            cur=temp;
            c++;
            if(left==1&&c==right+1)
              res=prev;
            else if(c==right+1)
                pr->next=prev;
       top->next=temp;
        }
      return res;
        
    }
};