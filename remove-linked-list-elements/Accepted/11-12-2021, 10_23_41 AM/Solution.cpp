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
                cur->val=-1;//marking all the nodes with the value to be removed
            cur=cur->next;
        }
        bool b=false;//to set the head node of our list being generated
        while(head!=nullptr)
        {
            if(head->val!=-1)//Since we have already marked the values to be removed we add the remaining numbers to our list
            {
                if(!b)//THis is to set the head
                {
                    ListNode *newNode=new ListNode(head->val);
                    newNode->next=nullptr;
                    start=newNode;
                    cur2=start;
                   
                    b=true;
                }
                else
                {
                   
                     ListNode *newNode=new ListNode(head->val);//creating a new node
                    newNode->next=nullptr;
                    cur2->next=newNode;//pointing the previous node to our newly created node
                    cur2=cur2->next;//moving to the nex node in our anser list
                }
            }
            head=head->next;
        }
        if(!b)
            return nullptr;
            
        return start;
    }
};