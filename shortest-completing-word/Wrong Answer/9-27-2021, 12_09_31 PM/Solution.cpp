// https://leetcode.com/problems/shortest-completing-word

class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        string li="";
        for(int i=0;i<licensePlate.length();i++)
        {
            if(isalpha(licensePlate[i]))
            {
                if(isupper(licensePlate[i]))
                    li=li+(char)(licensePlate[i]+32);
                else
                    li=li+licensePlate[i];
            }
        }
        string str="";
        vector<pair<int,string>>ar;
       for(int i=0;i<words.size();i++)
       {
           int c=0;
          str=words[i];
           for(int j=0;j<li.length();j++)
           {
               for(int k=0;k<words[i].length();k++)
               {
                   if(li[j]==words[i][k])
                   {
                       words[i][k]='1';
                       c++;
                   }
               }
           }
           if(c>=li.length())
           {
              ar.push_back(make_pair(i,str));
           }
          
       }
        string max1=ar[0].second;
        for(int i=0;i<ar.size();i++)
        {
            if(ar[i].second.length()<max1.length())
                max1=ar[i].second;
        }
        
        return max1;
    }
};