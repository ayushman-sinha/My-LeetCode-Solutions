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
  
     ListNode* calc(ListNode* l1, ListNode* l2) {
         if(l1->val==0&&l2->val!=0)
             return l2;
         if(l2->val==0&&l1->val!=0)
             return l1;
         if(l1->val==0&&l2->val==0)
         {
             ListNode *no=new ListNode(0);
             return no;
         }
       int num1=0,num2=0;
        while(l1!=nullptr)
        {
            num1=(num1*10)+l1->val;
            l1=l1->next;
        }
         while(l2!=nullptr)
        {
            num2=(num2*10)+l2->val;
            l2=l2->next;
        }  
        
         //Reversing the NOS
         int s1=0,s2=0;
         while(num1>0)
         {
             s1=(s1*10)+(num1%10);
             num1=num1/10;
         }
         while(num2>0)
         {
             s2=(s2*10)+(num2%10);
              num2=num2/10;
         }
         int sum=s1+s2;
        // cout<<s1<<" "<<s2<<endl;
         int s=sum;
         
          ListNode *head=new ListNode();
       
         ListNode *temp=head;
         while(s>0)
         {
            
             int a=s%10;
           ListNode *node= new ListNode(a); 
             temp->next=node;
             temp=temp->next;
             s=s/10;
            
         }
         return head->next;
     }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        return(calc(l1,l2));
    }
};