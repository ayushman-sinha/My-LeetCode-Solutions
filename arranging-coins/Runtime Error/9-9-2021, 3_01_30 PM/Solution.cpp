// https://leetcode.com/problems/arranging-coins

class Solution {
public:
    int arrangeCoins(int n) {
      int i=0;int sum=0;
        while(sum+i<=n)
        {
           sum=sum+i;
            i++;
        }
        return i-1;
    }
};