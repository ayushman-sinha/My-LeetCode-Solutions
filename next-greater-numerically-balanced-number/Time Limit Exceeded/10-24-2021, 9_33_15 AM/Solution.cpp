// https://leetcode.com/problems/next-greater-numerically-balanced-number

class Solution {
public:
    int nextBeautifulNumber(int n) {
 
      
        while(n!=INT_MAX)
        {
            int k=n+1;
            map<int,int>m;
            while(k!=0)
            {
                m[k%10]++;
                k/=10;
            }
            int c=0;
            for(auto i=m.begin();i!=m.end();i++)
            {
                if(i->first==i->second)
                    c++;
                else
                    break;
            }
            if(c==m.size())
                return n+1;
            n++;
        }
        return 0;
    }
};