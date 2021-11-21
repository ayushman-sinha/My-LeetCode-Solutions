// https://leetcode.com/problems/h-index

class Solution {
public:
    int hIndex(vector<int>& citations) {
        if(citations.size()==1)
            return 1;
       int h=0;
        //sort(citations.begin(),citations.end());
        for(int i=0;i<citations.size();i++)
        {
            int c=-1;
            for(int j=i+1;j<citations.size();j++)
            {
                auto it=lower_bound(citations.begin()+j,citations.end(),citations[i]);
                if(it!=citations.end())
                    c++;
             }
            h=max(h,c);
        }
        return h;
    }
};