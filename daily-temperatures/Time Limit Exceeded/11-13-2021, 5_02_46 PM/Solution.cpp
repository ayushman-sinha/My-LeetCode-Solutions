// https://leetcode.com/problems/daily-temperatures

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>ans;
        
        for(int i=0;i<temperatures.size();i++)
        {
            int j=i+1;
            int c=0;
            while(j<temperatures.size())
            {
                c++;
                if(temperatures[i]<temperatures[j])
                {
                    ans.push_back(c);
                    c=-1;
                    break;
                }
                j++;
                
            }
            if(c!=-1)
              ans.push_back(0);  
        }
        return ans;
    }
};