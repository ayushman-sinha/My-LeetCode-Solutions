// https://leetcode.com/problems/add-strings

class Solution {
public:
    string addStrings(string num1, string num2) {
        vector<int>s1; //store the first number
        vector<int>s2;//store the second number
      int len1=num1.length();
        int len2=num2.length();
        for(int i=0;i<len1;i++)
            s1.push_back(num1[i]-48);
        for(int i=0;i<len2;i++)
            s2.push_back(num2[i]-48);
        int dif=len1-len2; 
        for(int i=0;i<abs(dif);i++)//adding zeroes in the front of the numbers which is smaller
        {
            if(dif<0)
                s1.insert(s1.begin(),0);
            else
                s2.insert(s2.begin(),0);
        }     
        int carry=0;     
        string str="";
        for(int i=s1.size()-1;i>=0;i--)//adding the nos and storing the carried part in "carry"
        {
            int sum=s1[i]+s2[i];       
                sum+=carry;
              str=((char)((sum%10)+48))+str;
                carry=sum/10;       
        }
        if(carry!=0)//if there is any carry left its being stored accordingly
        {
            if(carry<10)
               str=((char)(carry+48))+str;
            else
            {
                str=((char)((carry%10)+48))+str;
                 str=((char)((carry/10)+48))+str;
            }
        }  
        return str;
    }
};