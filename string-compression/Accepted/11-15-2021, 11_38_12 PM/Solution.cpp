// https://leetcode.com/problems/string-compression

class Solution {
public:
    int compress(vector<char>& chars) {
        string s="";int m=0;
       vector<char>ar(chars.size(),' ');
        for(int i=0;i<chars.size();i++)
        {
            int c=0;
            for(int j=i;j<chars.size();j++)
            {
                if(chars[i]==chars[j])
                    c++;
                else
                    break;
            }
            ar[m]=chars[i];
                m++;
            if(c==1)     
            continue;
            string tmp=to_string(c);          
            for(int j=0;j<tmp.length();j++)
            {
                ar[m]=tmp[j];
                m++;
            } 
            i=i+c-1;
        }
        chars.clear();
        for(int i=0;i<ar.size();i++)
        {
            if(ar[i]==' ')
                break;
            chars.push_back(ar[i]);
        }       
        return chars.size();
    }
};