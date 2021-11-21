// https://leetcode.com/problems/baseball-game

class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int>stk;//stack to store the scores
        /*Since it is mentioned that there will always be a previous score we can put the condition of the string 
        being converted to the very last. In the end just keep popping the stack while finding the sum.*/
        for(int i=0;i<ops.size();i++)
        {
            
            if(ops[i][0]=='C')
            {
                stk.pop();
            }
            else if(ops[i][0]=='D')
            {
                stk.push(stk.top()*2);
            }
            else if(ops[i][0]=='+')
            {
                int k=stk.top();
                stk.pop();
                int k1=stk.top();
                
                stk.push(k);
                stk.push(k1+k);
            }
            else
            {
               int k=stoi(ops[i]);
                stk.push(k);
            }
        }
        int sum=0;
        while(!stk.empty())
        {
            sum+=stk.top();
            stk.pop();
        }
        return sum;
    }
};