// https://leetcode.com/problems/combination-sum

class Solution {
public:
    vector<vector<int>>anus;
    void comboSum(vector<int>&candidates,int i,int tmp,int target, vector<int>sum)
    {
        if(tmp>target||i==candidates.size())
        { 
            return;
        }
        if(tmp==target)
        {
            anus.push_back(sum);
           return;
        }
        tmp+=candidates[i];
        sum.push_back(candidates[i]);
        comboSum(candidates,i,tmp,target,sum);
        tmp-=candidates[i];
        sum.pop_back();
         comboSum(candidates,i+1,tmp,target,sum);
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>sum;
        comboSum(candidates,0,0,target,sum);
        return anus;
    }
};