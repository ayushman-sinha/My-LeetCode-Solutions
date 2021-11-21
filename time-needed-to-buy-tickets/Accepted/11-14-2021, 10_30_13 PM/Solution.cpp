// https://leetcode.com/problems/time-needed-to-buy-tickets

class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int ans=0;
        int i=0;
        while(tickets[k%tickets.size()]!=0)
        {
            if(tickets[i%tickets.size()]!=0)
            {
            if(tickets[k%tickets.size()]==0)            
                break;            
            ans++;
            tickets[i%tickets.size()]--;
            }
            i++;
        }
        return ans;
    }
};