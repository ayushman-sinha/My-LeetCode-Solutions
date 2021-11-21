// https://leetcode.com/problems/counting-bits

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ar;
       
     
        for(int i=0;i<=n;i++)
        {
           int j=i;
             int c=0;
            while(j!=0)
            {
                if(j%2==1)
                    c++;
                j=j/2;
            }
            ar.push_back(c);
        }
        return ar;
    }
};