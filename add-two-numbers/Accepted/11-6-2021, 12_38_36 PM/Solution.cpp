// https://leetcode.com/problems/add-two-numbers

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
  
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       ListNode *sum,*sumcur;
        ListNode *cur1=l1,*cur2=l2;
        int carry=0;bool b=false;
        while(cur1!=nullptr&&cur2!=nullptr)
        {
            if(b)
            {
            int tmpSum=(cur1->val+cur2->val+carry)%10;
            carry=(cur1->val+cur2->val+carry)/10;
            ListNode *newNode=new ListNode(tmpSum);
            newNode->next=nullptr;
                sumcur->next=newNode;
                sumcur=sumcur->next;
            }
            else
            {
                int tmpSum=(cur1->val+cur2->val)%10;
            carry=(cur1->val+cur2->val)/10;
            ListNode *newNode=new ListNode(tmpSum);
            newNode->next=nullptr;
                sum=newNode;
                sumcur=sum;
                b=true;
            }
            cur1=cur1->next;
            cur2=cur2->next;
        }
        if(cur1!=nullptr)
        {
            while(cur1!=nullptr)
            {
                 int tmpSum=(cur1->val+carry)%10;
            carry=(cur1->val+carry)/10;
            ListNode *newNode=new ListNode(tmpSum);
            newNode->next=nullptr;
                sumcur->next=newNode;
                sumcur=sumcur->next;
                cur1=cur1->next;
            }
        }
        else if(cur2!=nullptr)
        {
            while(cur2!=nullptr)
            {
                 int tmpSum=(cur2->val+carry)%10;
            carry=(cur2->val+carry)/10;
            ListNode *newNode=new ListNode(tmpSum);
            newNode->next=nullptr;
                sumcur->next=newNode;
                sumcur=sumcur->next;
                cur2=cur2->next;
            } 
        }
        if(carry!=0)
        {
             ListNode *newNode=new ListNode(carry);
            newNode->next=nullptr;
                sumcur->next=newNode;
                sumcur=sumcur->next;
        }
        return sum;
    }
};