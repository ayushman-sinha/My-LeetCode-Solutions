// https://leetcode.com/problems/remove-linked-list-elements

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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==nullptr)
            return nullptr;
       ListNode *cur=head,*start,*cur2;
        while(cur!=nullptr)
        {
            if(cur->val==val)
                cur->val=-1;
            cur=cur->next;
        }
        bool b=false;
        while(head!=nullptr)
        {
            if(head->val!=-1)
            {
                if(!b)
                {
                    ListNode *newNode=new ListNode(head->val);
                    newNode->next=nullptr;
                    start=newNode;
                    cur2=start;
                   
                    b=true;
                }
                else
                {
                   
                     ListNode *newNode=new ListNode(head->val);
                    newNode->next=nullptr;
                    cur2->next=newNode;
                    cur2=cur2->next;
                }
            }
            head=head->next;
        }
        if(!b)
            return nullptr;
            
        return start;
    }
};