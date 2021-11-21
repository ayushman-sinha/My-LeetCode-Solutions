// https://leetcode.com/problems/split-linked-list-in-parts

class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ListNode *cur=head;
        int size=0;
        while(cur!=nullptr)
        {
            size++;
            cur=cur->next;
         }
        vector<ListNode *>ans;
        if(size<=k)
        {
             ListNode *cur3=head;
           while(cur3!=nullptr)
           {
               ListNode *tmp=new ListNode(cur3->val);
            tmp->next=nullptr;
               ans.push_back(tmp);              
               cur3=cur3->next;
           }
            for(int i=1;i<=k-size;i++)
            {
               
                ans.push_back(nullptr);
            }
            return ans;
        }
        ListNode *cur2=head;
       
        for(int i=1;i<=k;i++)
        {
            if(i<=size%k)
            {
                ListNode *tmp=cur2;int c=1;
                ListNode *cur1=cur2;
                while(c<(size/k)+1)
                {
                    cur1=cur1->next;
                    c++;
                }              
                cur2=cur1->next;
                cur1->next=nullptr;
                ans.push_back(tmp);   
             }
            else
            {
                 ListNode *tmp=cur2;int c=1;      
                       ListNode *cur1=cur2;
                while(c<size/k)
                {
                    cur1=cur1->next;
                    c++;
                }                
                 cur2=cur1->next;
                cur1->next=nullptr;
                ans.push_back(tmp);   
            }
        }
        return ans;
        
    }
};