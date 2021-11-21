// https://leetcode.com/problems/ransom-note

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int rlength=ransomNote.length();
        int mlength=ransomNote.length();
        int c=0;
        if(rlength>mlength)
            return false;
       int low=0;int i=0;int high=mlength-1;
        while(i<rlength)
        {
            if(low>high)
            {
                c=1;
                break;
            }
           if((ransomNote[i]==magazine[low])&&(magazine[low]!='1'))
           {
               i++;
               magazine[low]=='1';
               low=0;
               high=mlength-1;
           }
            if((ransomNote[i]==magazine[high])&&(magazine[high]!='1'))
           {
               i++;
               magazine[high]=='1';
                low=0;
               high=mlength-1;
           }
            low++;
            high--;
        }
        if(c==1)
            return false;
        else
            return true;
        
    }
};