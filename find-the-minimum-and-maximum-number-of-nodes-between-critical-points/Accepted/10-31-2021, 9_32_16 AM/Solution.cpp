// https://leetcode.com/problems/find-the-minimum-and-maximum-number-of-nodes-between-critical-points

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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>ans;
        ListNode *cur=head;
        if(head==nullptr||head->next==nullptr)
        {
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
        ListNode *prev=cur;
        cur=cur->next;
        int k=1;
        vector<int>dist;
        while(cur->next!=nullptr)
        {
            
            ListNode *nxt=cur->next;
         if(prev->val>cur->val&&nxt->val>cur->val)            
                dist.push_back(k);              
            
         if(prev->val<cur->val&&nxt->val<cur->val)             
                 dist.push_back(k);
                 
             
            prev=cur;
            k++;
            cur=cur->next;
            
        }
        /*
        for(int i=0;i<dist.size();i++)
            cout<<dist[i]<<" ";
            */
        if(dist.size()==2)
        {
            ans.push_back(dist[1]-dist[0]);
             ans.push_back(dist[1]-dist[0]);
            return ans;
        }
        if(dist.size()>2)
        {
            int min1=INT_MAX;
            for(int i=dist.size()-1;i>=1;i--)
            {
                    
                    min1=min(dist[i]-dist[i-1],min1);
                
            }
            ans.push_back(min1);
             ans.push_back(dist[dist.size()-1]-dist[0]);
            return ans;
            
        }
        
         ans.push_back(-1);
            ans.push_back(-1);
        return ans;
    }
};