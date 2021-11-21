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
      
         if(l1->val==0&&l2->val==0&&l1->next==nullptr&&l2->next==nullptr)
         {
             ListNode *no=new ListNode(0);
             return no;
         }
      long long int num1=0,num2=0;
         int c1=0,c2=0;
         while(l1->val==0)
         {
             l1=l1->next;
             c1++;
         }
         while(l2->val==0)
         {
             l2=l2->next;
             c2++;
         }
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
        long long int s1=0,s2=0;
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
        // s1=s1*(pow(10,c1));
        // s2=s2*(pow(10,c2));
         long long int sum=s1+s2;
        // cout<<s1<<" "<<s2<<endl;
         long long int s=sum;
         
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