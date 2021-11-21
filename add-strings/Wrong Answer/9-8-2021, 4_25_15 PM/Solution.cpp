// https://leetcode.com/problems/add-strings

class Solution {
public:
    string addStrings(string num1, string num2) {
        vector<int>s1;
        vector<int>s2;
      int len1=num1.length();
        int len2=num2.length();
        for(int i=0;i<len1;i++)
            s1.push_back(num1[i]-48);
        for(int i=0;i<len2;i++)
            s2.push_back(num2[i]-48);
        int dif=len1-len2;
       //cout<<dif<<"\n";
        for(int i=0;i<abs(dif);i++)
        {
            if(dif<0)
                s1.insert(s1.begin(),0);
            else
                s2.insert(s2.begin(),0);
        }
      
        
        int carry=0;
        vector<int>res;
        for(int i=s1.size()-1;i>=0;i--)
        {
            int sum=s1[i]+s2[i];       
                sum+=carry;
                res.push_back(sum%10);
                carry=sum/10;       
        }
        /*
        for(int i=0;i<s2.size();i++)
            cout<<s2[i];
        */
        if(carry!=0)
        {
            if(carry<10)
                res.insert(res.begin(),carry);
            else
            {
                res.insert(res.begin(),carry%10);
                 res.insert(res.begin(),carry/10);
            }
        }
        string str="";
        for(int i=0;i<res.size();i++)
         str=(char)(res[i]+48)+str;
        return str;
    }
};