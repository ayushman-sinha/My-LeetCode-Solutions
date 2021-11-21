// https://leetcode.com/problems/reverse-nodes-in-even-length-groups

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
    int calcSize(ListNode *cur)
    {
        int c=0;
        while(cur!=nullptr)
        {
            cur=cur->next;
            c++;
        }
        return c;
    }
    ListNode* reverseEvenLengthGroups(ListNode* head) {
        if(head==nullptr||head->next==nullptr)
            return head;
        ListNode *cur=head;
        ListNode *prev=nullptr;
        int c=1;int m=2;int  prevG=1;
        int size=calcSize(head);
        //cout<<size;
        while(cur!=nullptr)
        {
             
             if(m==c&&c%2==0)
            {
                ListNode *cur1=cur;
                int k=0;
                ListNode *prev1=nullptr;
                while(cur1!=nullptr&&k!=c)
                {
                    ListNode *tmp=cur1->next;
                    cur1->next=prev1;
                    prev1=cur1;
                    cur1=tmp;
                   // cout<<cur1->val<<" ";
                   
                    k++;
                    
                }
                  //cout<<"\n"; 
               cur->next=cur1;              
               prev->next=prev1;
               c+=k;
                prevG=m;
                m=c*2;
              
                continue;
            }
            if((m!=c&&c%2!=0)&&(size-c)%2==0&&(size-c)<m)
            {
                ListNode *cur1=cur;
                
                ListNode *prev1=nullptr;
                while(cur1!=nullptr)
                {
                    ListNode *tmp=cur1->next;
                    cur1->next=prev1;
                    prev1=cur1;
                    cur1=tmp;
                   // cout<<cur1->val<<" 
                }
                  //cout<<"\n"; 
               cur->next=nullptr;              
              prev->next=prev1;
              
               break;
            }
            
           prev=cur;
            cur=cur->next;
            c++;
        }
        return head;
            
    }
};