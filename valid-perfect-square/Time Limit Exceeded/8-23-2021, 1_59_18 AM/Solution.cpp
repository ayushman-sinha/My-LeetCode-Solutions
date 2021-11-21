// https://leetcode.com/problems/valid-perfect-square

class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1)
            return true;
      long int i=2;int c=0;
        while(c%2==0||i!=num)
        {
            if(num%i==0)
            {
                num=num/i;
                c++;
            }
            else
            {
                i++;
                if(c%2!=0)
                    return false;
                c=0;
            }
        }
        return true;
        
    }
};