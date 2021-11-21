// https://leetcode.com/problems/find-original-array-from-doubled-array

class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        vector<int>ans;
        if(changed.size()%2!=0)
            return ans;
        sort(changed.begin(),changed.end());
        
        for(auto i=changed.begin();i!=changed.end();i++)
        {
            if(ans.size()<=changed.size()/2)
            {
                if(*i!=-1)
                {
                auto it=find(i+1,changed.end(),(*i)*2);
                if(it!=changed.end())
                {
                    ans.push_back(*i);
                    *it=-1;
                }
                }
            }
            else
                break;
        }
        if(ans.size()==changed.size()/2)        
        return ans;
        else
            return vector<int>();
    }
};