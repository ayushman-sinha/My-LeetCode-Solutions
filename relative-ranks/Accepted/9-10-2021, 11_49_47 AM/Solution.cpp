// https://leetcode.com/problems/relative-ranks

class Solution {
public:
    int bin_ser(int ns,vector<int> sorted)
    {
        int a=0;int b=sorted.size()-1;
        while(a<=b)
        {
            int mid=(a+b)/2;
            if(sorted[mid]==ns)
                return mid;
            else if(sorted[mid]<ns)
                b=mid-1;
            else if(sorted[mid]>ns)
                a=mid+1;
        }
        return 0;
    }
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int>sorted(score);
        vector<string>ans;
        sort(sorted.begin(),sorted.end(),greater <int>());
        
        for(int i=0;i<score.size();i++)
        {
            int ind=bin_ser(score[i],sorted);
            if(ind==0)
                ans.push_back("Gold Medal");
            else if(ind==1)
                ans.push_back("Silver Medal");
            else if(ind==2)
                ans.push_back("Bronze Medal");
            else
            {
                string ch=to_string(ind+1);
                ans.push_back(ch);
            }
        }
        return ans;
    }
};