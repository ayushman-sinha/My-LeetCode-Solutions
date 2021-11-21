// https://leetcode.com/problems/binary-gap

class Solution {
public:
    int binaryGap(int n) {
       vector<int>num;
        while(n!=0)
        {
            num.push_back(n%2);
            n/=2;
        }
       int count=0;
        for(int i=0;i<num.size();i++)
        {
            int chec=1;
            if(num[i]==1)
            {
            for(int j=i+1;j<num.size();j++)
            {
                if(num[j]==1)
                {
                    i=j-1;
                    count=max(count,chec);
                    break;
                }
                else
                    chec++;
            }
            }
        }
 
        return count;
    }
};