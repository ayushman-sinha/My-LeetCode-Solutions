// https://leetcode.com/problems/minimum-time-difference

class Solution {
public:
    /*
static bool comp(string a,string b)
    {
        int p=((a[0]-48)*10+(a[1]-48));
        int q=((b[0]-48)*10+(b[1]-48));
     
       if(abs(p-q)<=abs(24-p)+q||abs(p-q)<=abs(24-q)+p)
            return true;
    
       
        return false;
    }
    */
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
       // sort(timePoints.begin(),timePoints.end(),comp);
       cout<<timePoints[0]<<" ";
        cout<<timePoints[1]<<" ";
       //cout<<convert("00:35")<<" ";
        vector<int>ans;
        for(int i=0;i<timePoints.size();i++)
        {
             int t1=convert(timePoints[i]);
            ans.push_back(t1);
            /*
                int t2=convert(timePoints[i+1]);  
                dif=min({dif,abs(t1-t2),abs(1440-t1)+t2,abs(1440-t2)+t1});*/
               
            
        }
        sort(ans.begin(),ans.end());
        for(int i=1;i<ans.size();i++)
        {
            dif=min(dif,abs(ans[i]-ans[i-1]));
        }
        return (min(dif,abs(1440+ans[0]-ans[ans.size()-1])));
            
      
        
    }
};