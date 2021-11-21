// https://leetcode.com/problems/unique-email-addresses

class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        int count=0;
        
        for(int i=0;i<emails.size();i++)
        {
            string str=emails[i];
            int j=0;
         
            while(str[j]!='@')
            {  
                j++;
            }
            string tmp="";
           for(int k=0;k<j;k++)
           {
               if(str[k]!='.'&&str[k]!='+')
                   tmp+=str[k];
               if(str[k]=='+')
                   break;
           }
            tmp=tmp+str.substr(j);
            emails[i]=tmp;
        }
        for(int i=0;i<emails.size();i++)
        {
            if(emails[i]!="dup")
            {
                for(int l=i+1;l<emails.size();l++)
                {
                    if(emails[i]==emails[l])
                    {
                        emails[l]="dup";
                    }
                }
            }
        }
        for(int i=0;i<emails.size();i++)
        {
            if(emails[i]!="dup")
                count++;
        }
        return count;
    }
};