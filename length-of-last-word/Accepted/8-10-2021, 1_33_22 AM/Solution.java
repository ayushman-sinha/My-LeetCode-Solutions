// https://leetcode.com/problems/length-of-last-word

class Solution {
    public int lengthOfLastWord(String s) {
         int l=0;
      int a=0;int b=0;
     for(int i=0;i<s.length();i++)//Begininning Space
     {
         char ch=s.charAt(i);
         if(ch!=' ')
         {
             a=i;
             break;
         }
     }
       for(int i=s.length()-1;i>=0;i--)//End space
       {
            char ch=s.charAt(i);
         if(ch!=' ')
         {
             b=i;
             break;
         }
       }
        for(int i=b;i>=a;i--)
        {
            char ch=s.charAt(i);
            if(ch!=' ')
                l++;
            else
                break;
        }
        return l;
    }
}