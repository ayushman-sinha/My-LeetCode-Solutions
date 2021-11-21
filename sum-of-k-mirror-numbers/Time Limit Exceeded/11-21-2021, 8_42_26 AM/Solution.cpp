// https://leetcode.com/problems/sum-of-k-mirror-numbers

class Solution {
public:
    long long kMirror(int k, int n) {
        long long int ans=0;
        int num=0;
      
           
            for(int i=1;i<INT_MAX;i++)
            {
                if(i%k==0&&i%n==0)
                    continue;
                if(n==num)
                    break;
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
             
                while(tmp!=0)
                {
                    sum=sum+to_string(tmp%k);
                    rev=to_string(tmp%k)+rev;                    
                    tmp=tmp/k;
                }
               
                
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