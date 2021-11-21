// https://leetcode.com/problems/odd-even-linked-list

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
    ListNode* oddEvenList(ListNode* head) {
        ListNode *even,*odd;
        ListNode *cur=head;
        ListNode *even_start,*odd_start;
        int c=1;int b1=0,b2=0;
        while(cur!=nullptr)
        {
            if(c%2==0)
            {
                if(b1!=0)
                {
                    ListNode *newNode=new ListNode(cur->val);
                    newNode->next=nullptr;
                    even->next=newNode;
                    even=even->next;
                }
               else if(b1==0)
                {
                    even_start=new ListNode(cur->val);
                    even_start->next=nullptr;
                    even=even_start;   
                    b1++;
                }
            
              //even=even->next;
               
            }
            else
            {
              if(b2!=0)
                {
                    ListNode *newNode=new ListNode(cur->val);
                    newNode->next=nullptr;
                    odd->next=newNode;
                    odd=odd->next;
                }
               else if(b2==0)
                {
                    odd_start=new ListNode(cur->val);
                    odd_start->next=nullptr;
                   odd=odd_start;   
                    b2++;
                }  
            }
            
           c++;
            cur=cur->next;
        }
        odd->next=even_start;
        return odd_start;
        
    }
};