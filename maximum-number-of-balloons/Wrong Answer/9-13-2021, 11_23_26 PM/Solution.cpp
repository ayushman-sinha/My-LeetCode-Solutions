// https://leetcode.com/problems/maximum-number-of-balloons

class Solution {
public:
    int maxNumberOfBalloons(string text) {
       
        sort(text.begin(),text.end());
        int a=0,b=0,l=0,o=0,n=0;
        for(int i=0;i<text.length();i++)
        {
            if(text[i]=='a')
                a++;
            else if(text[i]=='b')
                b++;
            else if(text[i]=='l')
                l++;
            else if(text[i]=='o')
                o++;
                else if(text[i]=='n')
                    n++;
        }
        if(a<=b&&a<=n)
        {
            if((l>=2*a)&&(o>=2*a))
                return a;
        }
        else if(b<=a&&b<=n)
        {
            if(l>=2*b&&o>=2*b)
                return b;
        }
        else if (n<=a&&n<=b)
        {
            if(l>=2*n&&o>=2*n)
                return n;
        }
        return 0;
    }
};