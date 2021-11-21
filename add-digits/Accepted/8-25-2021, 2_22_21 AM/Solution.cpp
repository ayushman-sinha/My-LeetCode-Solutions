// https://leetcode.com/problems/add-digits

class Solution {
public:
    int addDigits(int num) {
        if(num>=0&&num<=9)
            return num;
        while(num>9)
        {
           long long int s=0;
            while(num!=0)
            {
                s=s+num%10;
                num=num/10;
            }
             if(s>=0&&s<=9)
            return s;
            else
                num=s;
        }
        return num;
    }
};