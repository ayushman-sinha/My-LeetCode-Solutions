// https://leetcode.com/problems/multiply-strings

class Solution {
public:
    string findSum(vector<string>sum)
    {
        int carry=0;
        string ans="";
        int  k=sum[0].length()-1;
        while(k>=0)
        {
            int s=0;
        for(int j=0;j<sum.size();j++)
        {
            s+=(sum[j][k]-48);
        }
            s+=carry;
            carry=s/10;
            ans=to_string(s%10)+ans;
            
            k--;
        }
        if(carry!=0)
        ans=to_string(carry)+ans;
        return ans;
        
    }
    string multiply_each(string num1,int  num2)
    {
        int carry=0;string ans="";
        for(int i=num1.length()-1;i>=0;i--)
        {
            int k=((num1[i]-48)*num2)+carry;
            if(k<10)
            {
                ans=to_string(k)+ans;
                carry=0;
            }
            else
            {
                 ans=to_string(k%10)+ans;
                carry=k/10;
            }
        }
        if(carry!=0)
            ans=to_string(carry)+ans;
        return ans;
    }
    string multiply(string num1, string num2) {
        if(num2[0]==48||num1[0]==48)
            return "0";
        string ans="";
        /*Assuming num1 to be the greater and num2 to be the smaller number
        */
        if(num1.length()>num2.length())
            swap(num1,num2);
        
        vector<string>sum;int m=0;
        for(int i=num2.length()-1;i>=0;i--)
        {
            string tmp=multiply_each(num1,num2[i]-48);
            string wh="";
            for(int k=1;k<=m;k++)
                wh+="0";
            m++;
           sum.push_back(tmp+wh);
            }
        int largest=sum[sum.size()-1].length();
        for(int i=0;i<sum.size();i++)
        {
            if(sum[i].length()!=largest)
            {
                int c=largest-sum[i].length();
                string w="";
                for(int  j=1;j<=c;j++)
                {
                    w+="0";
                }
                sum[i]=w+sum[i];
            }
        }
        /*
        for(int i=0;i<sum.size();i++)        
            cout<<sum[i]<<"\n";
            */
        
        
       return( findSum(sum));
        
    }
};