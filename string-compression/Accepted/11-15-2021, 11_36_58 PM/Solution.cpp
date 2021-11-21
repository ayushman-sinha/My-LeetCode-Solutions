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
            if(c==1)
            {
                ar[m]=chars[i];
                m++;
            continue;
            }
             ar[m]=chars[i];
                m++;
            string tmp=to_string(c);
            int k=i+1;
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
        /*
        for(int j=0;j<ar.size();j++)
            cout<<ar[j]<<" ";
            */
        return chars.size();
        
    }
};