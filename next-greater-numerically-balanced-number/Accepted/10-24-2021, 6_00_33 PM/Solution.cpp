// https://leetcode.com/problems/next-greater-numerically-balanced-number

class Solution {
public:
    int nextBeautifulNumber(int n) {
 
      
        while(n!=INT_MAX)
        {
            int k=n+1;
            map<int,int>m;
            bool b=false;
            while(k!=0)
            {
                if(k%10==0||k%10>6)
                {
                    b=true;
                    break;
                }
                m[k%10]++;
                k/=10;
            }
            if(!b)
            {
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
            }
            n++;
        }
        return 0;
    }
};