// https://leetcode.com/problems/longest-turbulent-subarray

class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        int max_count=0;
        
        for(int i=0;i<arr.size()-1;i++)
        {
           int which=0;
            if(arr[i]>arr[i+1])
                which=1;
           else if(arr[i]<arr[i+1])
                which=2;
            else
                continue;
                int c=0;
            for(int j=i;j<arr.size()-1;j++)
            {
                if(which%2!=0)
                {                   
                    if(arr[j]>arr[j+1])
                    {
                        which++;
                        c++;
                    } 
                    else
                    {
                        max_count=max(max_count,c);
                        break;
                    }
                    
                 }
                else
                {
                    if(arr[j]<arr[j+1])
                    {
                        which++;
                        c++;
                    }
                    else
                    {
                         max_count=max(max_count,c);
                        break;
                    }
                }
            }
        }
        return max_count+1;
        
    }
};