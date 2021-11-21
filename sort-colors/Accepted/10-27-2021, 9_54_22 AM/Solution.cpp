// https://leetcode.com/problems/sort-colors

class Solution {
public:
    void sortColors(vector<int>& nums) {
      priority_queue<int, vector<int>, greater<int> >pq;
        for(int i=0;i<nums.size();i++) 
            pq. push(nums[i]) ;
        int k=0;
        while(!pq.empty()) 
            {
            nums[k]=pq.top();
            pq. pop() ;
            k++;
            }


        
    }
};