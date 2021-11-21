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
    ListNode* reverseEvenLengthGroups(ListNode* head) {
        
        ListNode *cur=head;
        ListNode *prev=nullptr;
        int c=1;int m=2;
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
                m=c*2;
              
                continue;
            }
            
           prev=cur;
            cur=cur->next;
            c++;
        }
        return head;
            
    }
};