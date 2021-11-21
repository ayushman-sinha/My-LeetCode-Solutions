// https://leetcode.com/problems/minimum-time-difference

class Solution {
public:
    int convert(string a)
    {
        int hr=((a[0]-48)*10+(a[1]-48));
        int min=((a[3]-48)*10+(a[4]-48));
        if(hr==0&&min==0)
            return 1440;
        return (hr*3600+min*60)/60;
    }
    int findMinDifference(vector<string>& timePoints) {
        int dif=INT_MAX;
        sort(timePoints.begin(),timePoints.end());
        
       //cout<<convert("05:31")<<" ";
        //cout<<convert("22:08")<<" ";
       // cout<<convert("00:35")<<" ";
        for(int i=0;i<timePoints.size()-1;i++)
        {
             int t1=convert(timePoints[i]);
          
           
                
                int t2=convert(timePoints[i+1]);  
                dif=min(dif,abs(t1-t2));
                 if(abs(t1-1440)+t2<dif)
                    dif=abs(t1-1440)+t2;
               if(abs(t2-1440)+t1<dif)
                    dif=abs(t2-1440)+t1;
            
        }
        return dif;
        
    }
};