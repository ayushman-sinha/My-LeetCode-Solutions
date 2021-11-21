// https://leetcode.com/problems/minimum-operations-to-convert-number

class Solution {
public:

    int minimumOperations(vector<int>& nums, int start, int goal) {
      
        queue<int>q;
        q.push(start);
        int ans=0;
        vector<bool>visited(1001,false);
        while(!q.empty())
        {
            int size=q.size();
            
            while(size--)
            {
                int a=q.front();
            q.pop();
                if(a==goal)
                    return ans;
                if(a<0||a>1000||visited[a])
                    continue;
                visited[a]=true;
                for(int i=0;i<nums.size();i++)
                {
                    q.push(a+nums[i]);
                     q.push(a-nums[i]);
                     q.push(a^nums[i]);
                }
                
            }
            ans++;
           
        }
        return -1;
        
    }
};