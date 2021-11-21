// https://leetcode.com/problems/reverse-integer

class Solution {
public:
    int reverse(int x) 
    {
       double min= -pow(2,31);
        double max= -1* min;
        int num=abs(x);
        double temp=0;
        int t=0;
        while(num>0 && temp<=max && temp>=min){
            temp=temp* 10;
            temp+=num%10;
            num=num/10;
            t++;    
        }
        if(x<0){
            temp*=-1;
        }
        if(temp<=max && temp>=min){
            return temp;
        }
        else{
            return 0;
        }
     }
        
    
};