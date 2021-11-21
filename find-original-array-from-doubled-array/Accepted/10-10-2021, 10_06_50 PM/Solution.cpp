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
            if(*i<0)
                continue;
          
                auto it=lower_bound(i+1,changed.end(),(*i)*2);
                if(it!=changed.end()&&*it==2*(*i))
                {
                    ans.push_back(*i);
                    *it=-1;
                }
            else
                return {};
                
           
        }
        if(ans.size()==changed.size()/2)        
        return ans;
        else
            return vector<int>();
    }
};