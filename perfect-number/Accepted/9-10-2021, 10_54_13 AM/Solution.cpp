// https://leetcode.com/problems/perfect-number

class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num==1)
            return false;
        long int sum=0;
        for(int i=2;i<sqrt(num);i++)
        {
            if(num%i==0)
                sum+=i+(num/i);
        }
        sum++;
        if(sum==num)
            return true;
        else
            return false;
    }
};