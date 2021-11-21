// https://leetcode.com/problems/sort-list

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
    ListNode* sortList(ListNode* head) {
        if(!head)
            return nullptr;
      priority_queue<int,vector<int>,greater<int>>pq;
        ListNode *cur=head;
        while(cur!=nullptr)
        {
            pq.push(cur->val);
            cur=cur->next;
        }
      ListNode *tmp;
     
       int c=0;
        while(!pq.empty())
        {
               if(c==0)
               {
             head->val=pq.top();
                   tmp=head;
                   c=1;
                    //head=head->next;
                   continue;
               }
            tmp->val=pq.top();
            tmp=tmp->next;
            pq.pop();
        }
        return head;
        
    }
};