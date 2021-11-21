// https://leetcode.com/problems/self-dividing-numbers

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        for(int i=left;i<=right;i++)
        {
            int c=0;
            int k=i;
            while(k!=0)
            {
                if(k%10==0||i%(k%10)!=0)
                {
                    c=-1;
                    break;
                }
                c++;
                k/=10;
                
            }
            if(c!=-1)
                ans.push_back(i);
        }
        return ans;
    }
};