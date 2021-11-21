// https://leetcode.com/problems/sum-of-k-mirror-numbers

class Solution {
public:
    long long kMirror(int k, int n) {
        long long int ans=0;
        int num=0;
            for(int i=1;i<INT_MAX;i++)
            {
                 if(n==num)
                    break;
                if(i%k==0)
                    continue;
               
                 string dup=to_string(i);
                int a=0;
                int b=dup.length()-1;
                 while(a<=b)
                {
                   if(dup[a]!=dup[b])
                     {
                       a=-1;
                       break;
                     }
                     a++;
                     b--;
                }
                if(a==-1)
                    continue;
                int tmp=i; string sum="",rev="";
           int m=0;
                while(tmp!=0)
                {
                    sum=sum+(char)(tmp%k-48);
                   rev=(char)(tmp%k-48)+rev; 
                  if(sum[0]!=rev[m])
                  {
                      m=-1;
                      break;
                  }
                  m++;
                    tmp=tmp/k;
                }
               if(m==-1)
                   continue;
                 if(sum==rev)                   
                 {
                     //cout<<i<<" ";
                  ans=ans+i;
                     num++;
                 }
            }
        return ans;
    }
};