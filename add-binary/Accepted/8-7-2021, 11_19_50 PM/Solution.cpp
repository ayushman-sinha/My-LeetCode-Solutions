// https://leetcode.com/problems/add-binary

class Solution {
public:
    string addBinary(string a, string b) {
        int lena=a.length();
        int lenb=b.length();
        int dif=abs(lena-lenb);
            //adding 0 in front of a or b to make their length same
        if(lena>lenb)
        {
            for(int i=0;i<dif;i++)
                b='0'+b;
        }
        else
        {
           for(int i=0;i<dif;i++)
                a='0'+a; 
        }
      //  cout<<a<<" "<<b<<endl;
        string res="";
        int len=a.length();
        char carry='0';
        for(int i=len-1;i>=0;i--)
        {
            
            if((a[i]=='0')&&(b[i]=='0'))
            {
                if(carry=='1')
                {
                    res='1'+res;
                    carry='0';
                }
                else
                {
                res='0'+res;
                }
                
            }
           else if((a[i]=='1')&&(b[i]=='0'))
            {
                if(carry=='1')
                {
                    res='0'+res;   
                    carry='1';                 
                }
                else
                {
                res='1'+res;
                }
                  
            }
            else if((b[i]=='1')&&(a[i]=='0'))
            {
                 if(carry=='1')
                {
                    res='0'+res;        
                    carry='1';              
                }
                else
                {
                res='1'+res;
                }
                   
            }
           else
            {
                if(carry=='1')
                {
                    res='1'+res;
                    carry='1';
                   

                }
                else
                {
                res='0'+res;
                    carry='1';
                
                }
            }
          
        }
        if(carry=='1')
          {
        res='1'+res;
        
          }
        return res;
    }
};