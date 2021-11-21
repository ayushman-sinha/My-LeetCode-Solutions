// https://leetcode.com/problems/longest-turbulent-subarray

class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        
        int res=1;
        int prevsmall=1;int prevbig=1;
        int cursmall=1;int curbig=1;
   for(int i=1;i<arr.size();i++)
        {
           if(arr[i]>arr[i-1])
           {
               curbig=1+prevsmall;
             }
           if(arr[i]<arr[i-1])
           {
               cursmall=1+prevbig;
           }
           res=max({res,curbig,cursmall});
       prevsmall=cursmall;
       prevbig=curbig;
       curbig=1;
       cursmall=1;
           
        }
        return res;
        
    }
};