// https://leetcode.com/problems/combination-sum

class Solution {
public:
    vector<vector<int>>anus;//to store the answer
    void comboSum(vector<int>&candidates,int i,int tmp,int target, vector<int>sum)
    {
        if(tmp>target||i==candidates.size())/*base case. Whenever sum exceeds the target sum or the control exceeds the last                                                index*/
        { 
            return;
        }
        if(tmp==target)//iftarget==tmp we push the vector into answer vector
        {
            anus.push_back(sum);
           return;
        }
        tmp+=candidates[i];//finding the sum
        sum.push_back(candidates[i]);//pushing each element into a vector
        comboSum(candidates,i,tmp,target,sum);//calling the recursive function to find the next sum
        tmp-=candidates[i];/*Backtracing and popping the last added elements*/
        sum.pop_back();
         comboSum(candidates,i+1,tmp,target,sum);//incrementing the control variable by one to access the next element
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>sum;
        comboSum(candidates,0,0,target,sum);//recursive function
        return anus;
    }
};