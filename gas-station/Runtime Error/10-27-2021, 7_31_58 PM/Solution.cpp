// https://leetcode.com/problems/gas-station

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        stack<int>stk;//stack to store remaining gas in it
        int first;
        for(int i=0;i<gas.size();i++)
        {
            if(stk.empty())
            {
                
                if(gas[i]-cost[i]>0)
                {
                    first=i;
                    stk.push(gas[i]);
                }
            }
            else if(!stk.empty())
            {
                if(gas[i]+stk.top()-cost[i-1]>0)
                {
                     stk.push(stk.top()+gas[i]-cost[i-1]);
                }
                else
                {
                    while(!stk.empty())
                        stk.pop();
                }
            }
        }
       if(gas[0]+stk.top()-cost[cost.size()-1]<=0||stk.empty())
           return -1;
        stk.push(gas[0]+stk.top()-cost[cost.size()-1]);
        
        
        int i=1;
       while(i<=first)
       {
           if(i==first)
               return first;
            if(gas[i]+stk.top()-cost[i-1]<=gas[i+1])
            return -1;
           else
           stk.push(gas[i]+stk.top()-cost[i-1]);
           i++;
      
                
           
       }
        /*
        {
        while(!stk.empty())
        {
            cout<<stk.top()<<" ";
            stk.pop();
        }
        */
       
        return -1;
    }
};