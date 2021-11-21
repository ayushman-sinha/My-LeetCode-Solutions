// https://leetcode.com/problems/plus-one

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if(digits[digits.size()-1]<9)
        {
            digits[digits.size()-1]+=1;
            return digits;
        }
        int i=digits.size()-1;
        int carry=1;
        while(i>0)
        {
            if(digits[i]+carry>9)
            {
                digits[i]=(digits[i]+1)%10;
                carry=1;
            }
            else
            {
                digits[i]=digits[i]+1;
                carry=0;
                break;
            }
            i--;
        }
        if(carry==0)
            return digits;
        if(digits[0]+carry>9)
        {
           // int k=(digits[0]+1)%10;
               // int k1=(digits[0]+1)/10;
            digits[0]=0;
            digits.insert(digits.begin(),1);
        }
        else
        {
            digits[0]=digits[0]+1;
        }
           return digits;
    }
};