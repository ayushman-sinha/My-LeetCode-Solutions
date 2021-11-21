// https://leetcode.com/problems/number-of-valid-words-in-a-sentence

class Solution {
public:
    int count_d(string w)
    {
        int c=0;
        for(int i=1;i<w.length()-1;i++)
        {
            if(w[i]=='-')
                c++;
            else if(!isalpha(w[i]))
                return INT_MAX;
        }
        return c;
    }
    int countValidWords(string s) {
      if(s.length()==1&&(s[0]=='.'||s[0]==','||s[0]=='!'||s[0]==' '))
          return 1;
          
          
        int c=0;string w="";
        s=s+" ";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=' ')
                w+=s[i];
            
            else
            {
            
                if(isalpha(w[0])&&isalpha(w[w.length()-1]))
                {
                   int count=count_d(w);
                    if(count==1||count==0)
                    {
                  c++; 
                            cout<<w<<" ";
                    }
                    w="";
                }
                else if(isalpha(w[0])&&(w[w.length()-1]=='.'||w[w.length()-1]==','||w[w.length()-1]=='!'))
                {
                     int count=count_d(w);
                   
                        
                    if(count==1||count==0)
                    {
                            cout<<w<<" ";
                  c++; 
                    }
                    w="";
                }
                else if(w.length()==1&&w[0]=='.'||w[0]==','||w[0]=='!')
                    c++;
                w="";
                
            }
                
        }
        return c;
    }
};