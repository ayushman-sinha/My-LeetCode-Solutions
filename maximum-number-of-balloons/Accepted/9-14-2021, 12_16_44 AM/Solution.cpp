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
            else if(text[i]>'n')
                break;
                
        }
        cout<<a<<" "<<b<<" "<<l<<" "<<o<<" "<<n<<"\n";
       int l1=floor(l/2);
        int o1=floor(o/2);
        int fi=min(l1,o1);
        
        if(fi<=a&&fi<=b&&fi<=n)
            return fi;       
        if(a<=b&&a<=n&&fi>=a)
            return a;
        if(b<=a&&b<=n&&fi>=b)
            return b;
        if(n<=b&&n<=a&&fi>=n)
            return n;
        
        return 0;
    }
};