// https://leetcode.com/problems/ransom-note

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int rlength=ransomNote.length();
        int mlength=magazine.length(); 
        string str="";
        int c=0;
        if(rlength>mlength)
            return false;
       int low=0;int i=0;int high=mlength-1;
        while(i<rlength)
        {
            if((low>high)&&(i<rlength))
            {
                
             i++;
                low=0;
                high=mlength-1;
            }
           
        else  if((ransomNote[i]==magazine[low])&&(magazine[low]!='1'))
           {
            str=str+ransomNote[i];
               i++;              
               magazine[low]='1';
               low=0;
               high=mlength-1;
           }
          else  if((ransomNote[i]==magazine[high])&&(magazine[high]!='1'))
           {
               str=str+ransomNote[i];
               i++;
               magazine[high]='1';
                low=0;
               high=mlength-1;
                
           }
            
            else
           {
               low++;
            high--;
                
           }
           
        }
        if(str==ransomNote)
            return true;
        
        else
            return false;
        
    }
};