// https://leetcode.com/problems/guess-number-higher-or-lower

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int a=1;
        int b=n;
        while(a<=b)
        {
            int mid=a+(b-a)/2;
            if(guess(mid)==0)
                return mid;
            else if(guess(mid)<0)
              b =mid-1;
            else if(guess(mid)>0)
                a= mid+1;
                
        }
        return -1;
    }
};