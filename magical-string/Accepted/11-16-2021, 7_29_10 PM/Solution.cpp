// https://leetcode.com/problems/magical-string

class Solution {
public:
    int magicalString(int n) {
        if(n==0)
            return 0;
        if(n<3)
            return 1;
        vector<int>ar;
        ar.push_back(1);
        ar.push_back(2);
        ar.push_back(2);
            int a=1;
        int b=2;
        while(ar.size()<n)
        {
           if(ar[b]==1)
           {
               ar.push_back(a);
           }
         if(ar[b]==2)
            {
                 ar.push_back(a);
               ar.push_back(a);
            
            }
            if(a==1)
                a=2;
            else
                a=1;
            b++;
        }
        int c=0;
        
        for(int i=0;i<n;i++)
            if(ar[i]==1)
                c++;
        return c;
    }
};