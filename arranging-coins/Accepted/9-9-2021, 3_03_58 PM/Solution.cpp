// https://leetcode.com/problems/arranging-coins

class Solution {
public:
    int arrangeCoins(int n) {
      long long unsigned int i=0;long long unsigned int sum=0;
        while(sum+i<=n)
        {
           sum=sum+i;
            i++;
        }
        return i-1;
    }
};